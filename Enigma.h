#ifndef ENIGMA_H
#define ENIGMA_H

#include <iostream>
#include <fstream>
#include "Rotor.h"
#include "Reflector.h"
#include "Plugboard.h"
#include "MachineComponents.h"
#include <vector>

using namespace std;

class Enigma {
	public:
		Enigma(int argc, char** argv);
		int encode(int index);
	private:
		vector<Rotor> myRotors;
		Plugboard *plugboard;
		void performRotation(int i);
};


#endif
