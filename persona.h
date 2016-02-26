#ifndef PERSONA_H
#define PERSONA_H

class persona{ 
		char* nombre;
		int edad;
	public: 	
		persona(char*, int);
		char* getNombre();
		int getEdad();
};

#endif
