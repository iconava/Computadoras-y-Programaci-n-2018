#include <stdio.h>
#include <stdlib.h>
#include "cabecera.h"
#define MAX 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	appInfoData("Punteros 3","15/11/2017");
	
	int cals[MAX] = {8,9,8,8,6,7,9,8,10,10};
	int *ptrCals;
	
	printf("Valor del primer elemento: %d\n",cals[0]);
	printf("Direccion del primer elemento: %d\n",&cals[0]);
	printf("Direccion del primer elemento: %d\n",cals);
	
	ptrCals = cals;
	
	printf("Valor del primer elemento: %d\n", *ptrCals);
	
	return 0;
}
