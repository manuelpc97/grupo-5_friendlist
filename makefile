friendlist.exe: main.o persona.o
	g++ main.o persona.o -lncurses

main.o: main.cpp persona.h
	g++ -c main.cpp -lncurses

persona.o: persona.h persona.cpp
	g++ -c persona.cpp
