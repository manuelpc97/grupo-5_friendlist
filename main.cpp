#include <ncurses.h>
#include "persona.h"
#include <vector>

using namespace std;

int main(int argc, char*argv[]){
	bool seguir = true;
	int x, y;
	char nombre[25]; 
	char numero[9];
	char opcion;
	vector<persona> amigos;

	initscr();
	getmaxyx(stdscr, x, y);
	move((x/2),( y/2)-16);
	printw("Bienvenido a tu agenda de amigos");
	move((x/2)+1,( y/2)-16);
	printw("Laboratorio 5 de Programacion3");
	

	while(seguir){
		
		if(getch()){
			clear();
			start_color();
			init_pair(1, COLOR_RED, COLOR_BLACK);
			getmaxyx(stdscr, x, y);
			attron(COLOR_PAIR(1));
                	move((x/2)-5,(y/2)-16);
			printw("Menu");
			move((x/2)-4,( y/2)-16);
			printw("1.- Agregar Amigos");
			move((x/2)-3,( y/2)-16);
                	printw("2.- Mostrar Amigos");
			move((x/2)-2,( y/2)-16);
               	 	printw("3.- Salir");
			move((x/2)-1,( y/2)-16);
                	printw("Ingrese una opcion: ");
			opcion = getch();
			attroff(COLOR_PAIR(1));
			
			if(opcion=='1'){
                        	clear();
                        	move((x/2)-4,( y/2)-16);
                        	printw("Nombre del Amigo: ");
                        	getstr(nombre);
                        	move((x/2)-3,( y/2)-16);
                        	printw("Numero del amigo: ");
							getstr(numero);
							persona person(nombre, numero);
							amigos.push_back(person);
			}else if(opcion=='3'){
				clear();
				refresh();
				endwin();
				seguir = false;
			}else if(opcion=='2'){
				clear();
				move(y,(x/2)-10);
				printw("Nombre ");
				move(y,(x/2)+10);
				printw("Numero ");
				printw("\n");

			    for(int i = 0; i < amigos.size(); i++){
			    	move(y+1+i,(x/2)-10);
				    printw(amigos[i].getNombre());
				    printw(" ");
				    move(y+1+i,(x/2)+10);
				    printw(amigos[i].getNumero());
				    printw("\n");
			    }

			}else{
				move((x/2)-1,( y/2)+4);
				
			}
		}
		
	}

			
	return 0;
}









