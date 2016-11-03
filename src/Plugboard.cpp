#include <iostream>
#include <fstream>
#include <string>
#include "Plugboard.h"
#include "MachineComponents.h"

const int alphabetLength = 26;

using namespace std;

Plugboard::Plugboard(const char* filepath):MachineComponents() {
	MachineComponents::loadAlphabet(filepath);
}

int Plugboard::processMapping(int index) {
	for(int i = 0; i < alphabetLength; i++) {
		if(alphabet[i] == index) {
			if(i % 2 == 0) {
				return alphabet[i + 1];
			} else {
				return alphabet[i - 1];
			}
		} 
	}
	return index;
}

int Plugboard::inverseMapping(int index) { 
	return -1;
}