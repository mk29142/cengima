#ifndef MACHINECOMPONENTS_H
#define MACHINECOMPONENTS_H

#include <iostream>
#include <fstream>


class MachineComponents {
	public:
		MachineComponents();
		virtual int processMapping(int index) = 0;
		virtual int inverseMapping(int index) = 0;
	    void loadAlphabet(const char* filepath);
	 protected:
	 	int alphabet[26];
};

#endif