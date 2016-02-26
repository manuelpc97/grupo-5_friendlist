#include "persona.h"
#include <cstring>

persona::persona(char* nombre, int edad){
	this->nombre = new char[25];
	strcpy(this->nombre, nombre);	
	this->edad = edad;
}
