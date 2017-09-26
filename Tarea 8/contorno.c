#include <stdio.h>

int main(){
	int j=6;
	int fila; 
	int columna;
	
	for(fila=1,fila<=j,fila++){
		for(columna=1,columna<=j,columna++)
		printf("+");
	}
	
	system("pause");
	return 0;
}



