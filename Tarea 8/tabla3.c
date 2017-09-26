#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int j=0;
	
	for(j=1;j<=10;j=j+1){
		
		printf("3x%i=%i\n",j,j*3);
	
	}
	
	printf("Fin del Programa\n");
	
	system("pause");
	
return 0;
}
