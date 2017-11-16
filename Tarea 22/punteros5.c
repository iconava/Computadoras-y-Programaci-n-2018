#include <stdio.h>
#include <stdlib.h>
#include "cabecera.h"
#define MAX 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	appInfoData("Punteros 5","15/11/2017");
	
	int cals[MAX] = {8,9,8,8,6,7,9,8,10,10};
	int *ptrCals;
	int j = 0;
	ptrCals=cals; //&cals[0]
    printf("Elemento\t Direccion\t Valor\n");
    for(j=0;j<MAX;j++)
    printf("%d             \t%d \t %d\n",j,&cals[j],cals[j]);
    
    printf("-----------------\n");
    
    printf("Direccion a la que apunta: %d\n",ptrCals);
    printf("Valor al que apunta: %d\n",*ptrCals);
    ptrCals = ptrCals+4;
    printf("Direccon a la que apunta: %d\n",ptrCals);
    printf("Valor al que apunta: %d\n", *ptrCals);
    
	return 0;
}
