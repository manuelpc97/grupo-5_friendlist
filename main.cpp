#include <ncurses.h>



int main(int argc, char*argv[]){



	int x, y;
	int salir; 
	initscr();
	getmaxyx(stdscr, x, y);
	move(x/2,( y/2)-16);
	printw("Bienvenido a tu agenda de amigos");
	move((x/2)+1,( y/2)-16);
	printw("Laboratorio 5 de Programacion3");
	getch();
	endwin();


			
	return 0;
}









