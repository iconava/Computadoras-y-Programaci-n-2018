#include <stdio.h>
#include <string.h>
#include "alumnos.h"
#include "cabecera.h"
#define MAX 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	appInfoData("Estructuras 3, 4 y 5","20/11/2017");
	
	//ALUMNO var1; 
	
	//var1=nuevoAlumno();
	
	//printf("Edad: %d\nNombre:%s",var1.edad,var1.nombre);
	
	ALUMNO lista[MAX];
	int j=0;
	for(j=0;j<MAX;j++){
		printf("Datos del alumno %d\n",j+1);
		lista[j]=nuevoAlumno();
	}
	
	for(j=0;j<MAX;j++){
		imprimeAlumno(lista[j]);
	}
//	imprimeAlumno(var1);//sustituye al print de arriba con una funcion
	
	return 0;
}
