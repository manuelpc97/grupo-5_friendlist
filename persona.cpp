#include "persona.h"
#include <cstring>

persona::persona(char* nombre, char* numero){
	this->nombre = new char[25];
	this->numero = new char[9];
	strcpy(this->nombre, nombre);
	strcpy(this->numero, numero);	
	
}

char* persona::getNombre(){
	return nombre;
}

char* persona::getNumero(){
	return numero;
}
