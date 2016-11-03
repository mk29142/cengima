#include <iostream>
#include <fstream>
#include "Rotor.h"
#include "MachineComponents.h"
const int alphabetLength = 26;

using namespace std;

Rotor::Rotor(const char* filepath):MachineComponents() {
	MachineComponents::loadAlphabet(filepath);
	rotateVal = 0;
}

int Rotor::processMapping(int index) {
	int val = (index + rotateVal) % alphabetLength;
	val = alphabet[val];
	val = (val - rotateVal);
	val = val % alphabetLength;
	if(val < 0) {
		val += alphabetLength;
	}
	return val;
}

int Rotor::inverseMapping(int index) {
	int val = (index + rotateVal) % alphabetLength;
	int offset;
	for(int i = 0; i < alphabetLength; i++) {
		if(alphabet[i] == val ) {
			offset = i;
		}
	}
	offset = offset - rotateVal;
	offset = offset % alphabetLength;
	if(offset < 0) {
		offset += alphabetLength;
	}
	return offset;
}

void Rotor::rotate() {
	rotateVal = rotateVal + 1;
	rotateVal = rotateVal % alphabetLength;
}

int Rotor::getRotateVal() {
	return rotateVal;
}

