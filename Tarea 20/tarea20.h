int fnCuadrado(int n, int m){
	int g=0;
	int f=0;
	for(g=1;g<=m;g=g+1){
		for(f=1;f<=n;f=f+1){
			printf("x");
			
		}printf("\n");
	}
}

float fnIva(float cant){
	float valor=0.16;
	float iba=0.0;
	float total=0.0;
	iba=cant*valor;
	total=cant+iba;
	printf("Cantidad= %.2f\nIva= %.2f\nTotal= %.2f\n",cant,iba,total);
}

