# edit this makefile so that running make compiles your enigma program

CFLAGS =-Wall -Werror -pedantic -std=c++11

enigma: Main.o Rotor.o Reflector.o Plugboard.o Enigma.o MachineComponents.o
	g++ -o enigma $(CFLAGS) $+

%.o: %.cpp
	g++ -c $(CFLAGS) $<

clean:
	rm -rf enigma *.o

.PHONY: clean
