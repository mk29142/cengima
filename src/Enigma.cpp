#include <iostream>
#include <fstream>
#include "Rotor.h"
#include "Reflector.h"
#include "Plugboard.h"
#include "MachineComponents.h"
#include "Enigma.h"
#include <vector>

using namespace std;

Enigma::Enigma(int argc, char** argv) {
	if(argc > 1) {
		if(argc > 2) {
			for(int i = 1; i < argc - 1; i++) {
			myRotors.push_back(Rotor(argv[i]));
			}
		}
		plugboard = new Plugboard(argv[argc - 1]);
	} else {
		perror("Not enough arguments");
		exit(1);
	}
}

int Enigma::encode(int index) {

	int val = index;
	Reflector *r = new Reflector();
	val = plugboard->processMapping(val);

	for(int i = 0; i < (int) myRotors.size(); i++){
		val = myRotors[i].processMapping(val);
	}

	val = r->processMapping(val);

	for(int j = (int) myRotors.size() - 1; j >= 0; j--) {
		val = myRotors[j].inverseMapping(val);
	}

	val = plugboard->processMapping(val);

	if(myRotors.size() > 0) {
		performRotation(0);
	}
	delete r;
	return val;
}

void Enigma::performRotation(int rotorNumber) {
	myRotors[rotorNumber].rotate();
	if(myRotors[rotorNumber].getRotateVal() == 0) {
		if((rotorNumber+1) < (int) myRotors.size()) {
			performRotation(rotorNumber+1);
		}
	}
}





