#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Ingrese un numero del 1 al 7\n");
	scanf("%i",&n);
	
	switch(n){
		case 1:
			printf("Lunes\n");
			break;
		case 2:
			printf("Martes\n");
			break;
		case 3:
			printf("Miercoles\n");
			break;
		case 4:
			printf("Juevebes\n");
			break;
		case 5:
			printf("Viernes\n");
			break;
		case 6:
			printf("Sabado\n");
			break;
		case 7:
			printf("Domingo\n");
			break;
		default:
			printf("Ese no es un numero entre 1 y 7\n");
									
	}
	
	system("pause");
	return 0;
}
