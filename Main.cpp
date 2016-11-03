// skeleton C++ file, you will need to edit this and other files to implement your enigma machine
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <string>
#include "Rotor.h"
#include "Reflector.h"
#include "Plugboard.h"
#include "MachineComponents.h"
#include "Enigma.h"

const int LetterConversion = 65;

using namespace std;

int main(int argc, char **argv) {

	if(argc == 1) {
		perror("No arguments");
		return 1;
	}

	Enigma *e = new Enigma(argc, argv);

	string out;

	cin >> ws;
	while(!cin.eof()) {
		char c; 
		cin >> ws;
		cin >> c;
		cin >> ws;
		int index;
		index = c - LetterConversion;
		index = e->encode(index);
		char s = index + LetterConversion;
		out+=s;

	}
	cout << out << endl;
	delete e;
  return 0;
}
