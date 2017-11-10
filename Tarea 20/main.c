#include <stdio.h>
#include <stdlib.h>
#include "tarea20.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Cuadrado
	int r=0;
	int b=0;
	int h=0;
	printf("Ingrese altura del cuadrado:\n");
	scanf("%d",&r);
	printf("ingrese el ancho del cuadrado:\n");
	scanf("%d",&b);
	h=fnCuadrado(b,r);	
	
		//Iva
	float c=0.0;
	float res;
	printf("Teclea una cantidad\n");
	scanf("%f",&c);
	res=fnIva(c);
	printf("\n",res);
	
	system ("pause");
	
	return 0;
}
