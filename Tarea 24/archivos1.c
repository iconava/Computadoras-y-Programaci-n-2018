#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dato;
	
	FILE *ptrArchivo;
	ptrArchivo=fopen("datos1.dat","wb");
	
	if(ptrArchivo==NULL){
		printf("Error al abrir el archivo\n");
	}else{
		
		printf("Dame el dato a guardar del archivo:");
		scanf("%d",&dato);
		
		//se guarda en archivo
		fprintf(ptrArchivo,"%d\n",dato);
		fprintf(ptrArchivo,"%d\n",++dato);
		fprintf(ptrArchivo,"%d\n",++dato);
		
		fclose(ptrArchivo); //se cierra el archivo 
	}
	
	return 0;
}
