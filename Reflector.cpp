#include <iostream>
#include <fstream>
#include "Reflector.h"
#include "MachineComponents.h"

using namespace std;

const int alphabetLength = 26;

Reflector::Reflector() {
}

int Reflector::processMapping(int index) {
	return (index + 13) % alphabetLength;
}
