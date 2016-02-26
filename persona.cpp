#include "persona.h"
#include <cstring>

persona::persona(char* nombre, int edad){
	this->nombre = new char[25];
	strcpy(this->nombre, nombre);	
	this->edad = edad;
}

char* persona::getNombre(){
	return nombre;
}

int persona::getEdad(){
	return edad;
}
