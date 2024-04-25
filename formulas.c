#include <stdio.h>
#include <math.h>
#include "formulas.h"

void Circulo(){

float radio;
int menu;
float resul;


printf("Que quieres sacar?\n");
printf("\n");
printf("1) Perimetro\n");
printf("2) Area\n");
printf("3) Diametro\n");
scanf("%d",&menu);

switch(menu){

case 1:
printf("Dame tu Radio porfavor :)\n");
printf("\n");
scanf("%f",&radio);
resul=radio*2*3.1416;
printf("El Perimetro es %.2f.\n",resul);
break;

case 2:
printf("Dame tu Radio porfavor :)\n");
printf("\n");
scanf("%f",&radio);
resul=radio*radio*3.1416;
printf("El Area es %.2f.\n",resul);
break;

case 3:
printf("Dame tu Radio porfavor :)\n");
printf("\n");
scanf("%f",&radio);
resul=radio*2;
printf("El Diamtro es %.2f.\n",resul);
break;

default:
printf("Eso no es una de las opciones .-.\n");
break;
}
return 0;
}

void Rectangulo(){

float altura;
float base;
int menu;
float resul;


printf("Que quieres sacar?\n");
printf("\n");
printf("1) Perimetro\n");
printf("2) Area\n");
scanf("%d",&menu);

switch(menu){

case 1:
printf("Dame tu base porfavor :)\n");
printf("\n");
scanf("%f",&base);
printf("Dame tu altura porfavor :)\n");
printf("\n");
scanf("%f",&altura);
resul=2*(base+altura);
printf("El Perimetro es %.2f.\n",resul);
break;

case 2:
printf("Dame tu base porfavor :)\n");
printf("\n");
scanf("%f",&base);
printf("Dame tu altura porfavor :)\n");
printf("\n");
scanf("%f",&altura);
resul=base*altura;
printf("El Area es %.2f.\n",resul);
break;

default:
printf("Eso no es una de las opciones .-.\n");
break;
}
return 0;
}

void Triangulo(){
float c;
float altura;
float base;
int menu;
float resul;
float a;

printf("Que quieres sacar?\n");
printf("\n");
printf("1) Perimetro\n");
printf("2) Area\n");
scanf("%d",&menu);

switch(menu){

case 1:
printf("Dame tu base porfavor :)\n");
printf("\n");
scanf("%f",&base);
printf("Dame tu altura porfavor :)\n");
printf("\n");
scanf("%f",&altura);
c=sqrt(base*base+altura*altura);
a=c-base;
resul=a+base+c;
printf("El Perimetro es %.2f.\n",resul);
break;

case 2:
printf("Dame tu base porfavor :)\n");
printf("\n");
scanf("%f",base);
printf("Dame tu altura porfavor :)\n");
printf("\n");
scanf("%f",altura);
resul=(base*altura)/2;
printf("El Area es %.2f.\n",resul);
break;

default:
printf("Eso no es una de las opciones .-.\n");
break;
}
return 0;
}

void Pentagono(){
float lado;
float apotema;
int menu;
float resul;


printf("Que quieres sacar?\n");
printf("\n");
printf("1) Perimetro\n");
printf("2) Area\n");
scanf("%d",&menu);

switch(menu){

case 1:
printf("Dame tu apotema porfavor :)\n");
printf("\n");
scanf("%f",&apotema);
lado=(apotema*2)/tan(3.1416/5);
resul=5*lado;
printf("El Perimetro es %.2f.\n",resul);
break;

case 2:
printf("Dame tu apotema porfavor :)\n");
printf("\n");
scanf("%f",&apotema);
resul=(5*pow(apotema,2)*tan(3.1416/5))/4;
printf("El Area es %.2f.\n",resul);
break;

default:
printf("Eso no es una de las opciones .-.\n");
break;
}
return 0;
}