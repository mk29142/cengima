#ifndef ROTOR_H
#define ROTOR_H

#include <iostream>
#include <fstream>
#include "MachineComponents.h"

class Rotor : public MachineComponents {
	public:
		Rotor(const char* filepath);
		int processMapping(int index);
	    int inverseMapping(int index);
		void rotate();
		int getRotateVal();
	private:	
		int rotateVal;
};

#endif