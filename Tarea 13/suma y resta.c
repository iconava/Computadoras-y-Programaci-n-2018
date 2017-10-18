#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int b;
	int opc;
	int resultado;
	
	do{
	
		printf("Ingrese un numero entero\n");
		scanf("%i",&a);
	    printf("Ingrese un numero entero\n");
		scanf("%i",&b);
		printf("Seleccione una opcion:\n1)Suma\n2)Resta\n3)Salir\n");
		scanf("%i",&opc);
	
		
		switch(opc){
			case 1:
				resultado=a+b;
				printf("%i+%i=%i\n",a,b,resultado);
				break;
			case 2:
				resultado=a-b;
				printf("%i-%i=%i\n",a, b,resultado);
				break;
			case 3:
				printf("Fin del programa\n");
				break;
			default:
				printf("Esa opcion no esta disponoble\n");
		}
	}while(opc!=3); //condicion para que se siga cumpliendo el while(la variable opc debe ser diferente de 3)
	
	printf("Ponme 100 Aaron :)\n");
	
	system("pause");
	return 0;
}
