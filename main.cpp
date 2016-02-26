#include <ncurses.h>

int main(int argc, char*argv[]){
	bool seguir = true;
	int x, y;
	char opcion;

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
		
			if(opcion=='3'){
				clear();
				refresh();
				endwin();
				seguir = false;
			}else{
				move((x/2)-1,( y/2)+4);
				
			}
		}
	}
			
	return 0;
}
