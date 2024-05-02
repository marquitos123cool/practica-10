#include <stdio.h>
#include <math.h>
#include "formulas.h"

int main(void){

    int menu;

do{
    printf("Elije la figura con la que quieres trabajar: \n");
    printf("\n");
    printf("1) Circulo\n");
    printf("2) Rectangulo\n");
    printf("3) Triangulo\n");
    printf("4) Pentagono\n");
    printf("5) Salir\n");
    scanf("%d",&menu);

    switch(menu){

    case 1:
    Circulo();
    break;

    case 2:
    Rectangulo();
    break;

    case 3:
    Triangulo();
    break;
    
    case 4:
    Pentagono();
    break;

    case 5:
    printf("byeeeeeeeeeeee :D\n");
    break;

    default:
    printf("Eso no es una opcion ._.\n");
    break;
    }
}while(menu!=5);

    return 0;
}

