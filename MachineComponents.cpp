#include <iostream>
#include <fstream>
#include "MachineComponents.h"

using namespace std;

const int alphabetLength = 26;

MachineComponents::MachineComponents() {
}

void MachineComponents::loadAlphabet(const char* filepath) {
	ifstream file(filepath);
	if(file) {
		file >> ws;
		for(int i = 0; i < alphabetLength; i++ ) {

			int index = 0;
			file >> ws >> index;

			alphabet[i] = index;

		}
		file.close();
	} else {
		perror("No such file");
		exit(1);
	}
}