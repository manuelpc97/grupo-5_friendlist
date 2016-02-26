#include <ncurses.h>



int main(int argc, char*argv[]){

	int x, y;
	char nombre[25]; 
	char numero[9];
	char opcion;
	initscr();
	getmaxyx(stdscr, x, y);
	move((x/2),( y/2)-16);
	printw("Bienvenido a tu agenda de amigos");
	move((x/2)+1,( y/2)-16);
	printw("Laboratorio 5 de Programacion3");
	
	

	
	if(getch()){
		clear();
		getmaxyx(stdscr, x, y);
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
		
		if(opcion=='3'){
			clear();
			refresh();
			endwin();
		}
		if(opcion=='1'){
			clear();
			move((x/2)-4,( y/2)-16);
			printw("Nombre del Amigo: ");
			getstr(nombre);
			move((x/2)-3,( y/2)-16);
			printw("Numero del amigo: ");
		}
	}

			
	return 0;
}









