#include <stdio.h>

int main(){

	int numeroRangoMin = 0;
	int numeroRangoMax = 0;
	int contadorMultiplos = 0;
	int numeroEvaluar = 0;

	printf("\nIngrese el primer numero del rango: ");
	scanf("%i", &numeroRangoMin);
	printf("\nIngrese el segundo numero del rango:");
	scanf("%i", &numeroRangoMax);
	printf("\nIngrese	 el numero a evaluar: ");
	scanf("%i", &numeroEvaluar);

	for(int i = numeroRangoMin ; i <= numeroRangoMax ; i++ ){

		if (i % numeroEvaluar == 0)
		{
			printf("\n-------->El numero %i es multiplo de %i<--------\n", i,numeroEvaluar);
			contadorMultiplos++;
		}else{
			printf("\nEl numero %i no es multiplo de %i\n", i, numeroEvaluar);
		}

	}

	printf("\nLa cantidad de multiplos del numero %i en el rango es: %i\n", numeroEvaluar, contadorMultiplos);

	return 0;
}