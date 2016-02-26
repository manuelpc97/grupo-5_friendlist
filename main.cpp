#include <ncurses.h>
#include "persona.h"
#include <vector>

using namespace std;

int main(int argc, char*argv[]){
	int contador=0;
	char letra;
	bool seguir = true;
	int x, y;
	char nombre[25]; 
	char numero[10];
	char opcion;
	char temporal[10];
	vector<persona> amigos;

	initscr();
	start_color();
	getmaxyx(stdscr, x, y);
	init_pair(5,COLOR_MAGENTA,COLOR_BLACK);
	attron(COLOR_PAIR(5));
	move((x/2),( y/2)-16);
	printw("Bienvenido a tu agenda de amigos");
	move((x/2)+1,( y/2)-16);
	printw("Laboratorio 5 de Programacion3");
	attroff(COLOR_PAIR(5));

	while(seguir){
		
		if(getch()){
			clear();
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
				init_pair(3, COLOR_YELLOW, COLOR_BLACK);
				attron(COLOR_PAIR(3));
                        	move((x/2)-4,( y/2)-16);
                        	printw("Nombre del Amigo: ");
				
                      		while((letra = getch())!='\n'){	
                      			echo();
					if(((letra>=65)&&(letra<=90)) ||((letra>=97)&&(letra<=122)) ){
						nombre[contador] = letra;
						contador++;
					}else{
						noecho();
					}
					
				} 
				echo();
				contador=0; 	
                        	move((x/2)-3,( y/2)-17);
                        	printw("Numero del amigo: ");
			        //getstr(numero);
                        	while((letra=getch())!='\n'){
                        		echo();
                        		if(((letra>=48)&&(letra<=57))){
                        			if(contador==3){
                        				printw("-");
                        				temporal[contador]= letra;
                        				contador++;
                        				temporal[contador]='-';
                        				contador++;
                        			}else{
                        				temporal[contador] = letra;
                        				contador++;
                        			}
                        		}else{
                        			noecho();
                        		}
                        	}
                             contador=0;
                        	while(contador<9){
                        		numero[contador]=temporal[contador];
                        		contador++;
                        	}
				attroff(COLOR_PAIR(3));
				contador = 0;
				persona person(nombre, numero);
				amigos.push_back(person);
				while(contador<25){
					nombre[contador] = '\0';
					contador++;
				}
				contador=0;
				while(contador<10){
                                        numero[contador] = '\0';
                                        temporal[contador]='\0';
                                        contador++;
                                }
                                contador=0;
			}else if(opcion=='3'){
				clear();
				refresh();
				endwin();
				seguir = false;
			}else if(opcion=='2'){
				clear();
				init_pair(5,COLOR_MAGENTA,COLOR_BLACK);
				attron(COLOR_PAIR(5));
				printw("------------Amigos-----------");
				printw("\n");
				attroff(COLOR_PAIR(5));
				init_pair(2,COLOR_GREEN,COLOR_BLACK);
				attron(COLOR_PAIR(2));
				getmaxyx(stdscr,y,x);
				move(y,(x/2));
				printw("Nombre --------------");
				move(y,(x/2)+10);
				printw("Numero ");
				printw("\n");
				attroff(COLOR_PAIR(2));
			    for(int i = 0; i < amigos.size(); i++){
			    	    init_pair(4,COLOR_BLUE,COLOR_BLACK);
				    attron(COLOR_PAIR(4));			    	
			    	    move(y+1+i,(x/2));
				    printw(amigos[i].getNombre());
				    printw("--------------");
				    move(y+1+i,(x/2)+10);
				    printw(amigos[i].getNumero());
				    printw("\n");
				    attroff(COLOR_PAIR(4));
			    }


			}else{
				move((x/2)-1,( y/2)+4);
				
			}
		}
		
	}

			
	return 0;
}









