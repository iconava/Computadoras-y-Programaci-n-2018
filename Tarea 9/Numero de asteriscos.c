#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int j;
	int n;
	
	printf("Ingrese un numero\n");
	scanf("%i",&j);
	
	for(n=1;n<=j;n++){
		
		printf("*");
	}
	printf("\n");
	
	system("pause");
	return 0;
}
