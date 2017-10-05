#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("Ingrese cualquier numero\n");
	scanf("%i",&num);
	
	if(num%2==0){
		
		printf("El numero es par\n",num);
	}
	else{
		printf("El numero  es impar\n");
	}
	
	system("pause");
	return 0;
}
