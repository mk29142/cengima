#ifndef PLUGBOARD_H
#define PLUGBOARD_H

#include <iostream>
#include <fstream>
#include "MachineComponents.h"

class Plugboard : public MachineComponents {
	public:
		Plugboard(const char* filepath);
		int processMapping(int index);
		int inverseMapping(int index);
};

#endif