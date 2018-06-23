exe:	main.o Persona.o
	g++ main.o Persona.o -o exe
main.o: main.cpp Persona.h
	g++ -c main.cpp
Persona.o:   Persona.cpp Persona.h
	g++ -c Persona.cpp
