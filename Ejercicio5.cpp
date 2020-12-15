#include  <stdio.h>


int  main () {
	float numero1;
	float numero2;
	float multiplicacion;
  
	printf("Ingresar el primer números de la forma X.X:\n");
	scanf("%f", &numero1);
	printf("Ingresar el segundo números de la forma Y.Y:\n");
	scanf("%f", &numero2);	
    multiplicacion = numero1 * numero2;
	printf("La multiplicacion de los numeros es:%f\n", multiplicacion);
	 return 0;
	}
