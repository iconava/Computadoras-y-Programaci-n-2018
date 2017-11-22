struct alumnos{
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char nCuenta[10];
};

typedef struct alumnos ALUMNO;

ALUMNO nuevoAlumno(){
	ALUMNO tmp;
	printf("introduce la edad:\n");
	scanf("%d",&tmp.edad);
	
	printf("Introduce el nombre:\n");
	fflush(stdin);//limpia el buffer del teclado
	gets(tmp.nombre);
	
	printf("Introduce el genero:\n");
	scanf("%c",&tmp.genero);
	
	printf("Introduce Carrera:\n");
	fflush(stdin);//liempa el buffer del teclado
	gets(tmp.carrera);
	
	printf("Ingrese el numero de cuenta:\n");
	fflush(stdin);//limpia el buffer del teclado
	gets(tmp.nCuenta);
	
	
	return tmp;
}

void imprimeAlumno(ALUMNO al){
		printf("****************************\n");
		printf("Nombre: %s\n",al.nombre);
		printf("Edad: %d\n",al.edad);
		printf("Genero: %c\n",al.genero);
		printf("Carrera: %s\n",al.carrera);
		printf("Numero de cuenta: %s\n",al.nCuenta);
		
		
	}
