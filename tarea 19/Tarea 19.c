#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fnCuadrado(int n, int m){
	int g=0;
	int f=0;
	for(g=1;g<=m;g=g+1){
		for(f=1;f<=n;f=f+1){
			printf("x");
			
		}printf("\n");
	}
}


int main(int argc, char *argv[]) {
	int r=0;
	int b=0;
	int h=0;
	printf("Ingrese altura del cuadrado:\n");
	scanf("%d",&r);
	printf("ingrese el ancho del cuadrado:\n");
	scanf("%d",&b);
	h=fnCuadrado(b,r);

	
	return 0;
}
