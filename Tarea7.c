#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
int num1;
int num2;
int num3;

printf("Ingrese el primer numero\n");
     scanf("%i",&num1);
     
printf("Ingrese el segundo numero\n");     
    scanf("%i",&num2);
    
printf("Ingrese el tercer numero\n");
    scanf("%i",&num3);    
    
    if (num1>0 && num2>0 && num3>0)
    {
    	if ((num1==num2) && (num2==num3 )&& (num1==num3))
		{
		printf("Los numeros debem ser diferentes %i\n");
		}
		if ((num1<num2) && (num1<num3)){
			
			printf("El numero menor es el: %i\n",num1);
			
		}else if ((num3<num1) && (num3<num2)){
			
			printf("El numero menor el el: %i\n",num3);
		}
	}
	else{
		printf("Los numeros tienen que ser mayores a 0\n");
	}
	
	system("PAUSE");
    
	return 0;
}
