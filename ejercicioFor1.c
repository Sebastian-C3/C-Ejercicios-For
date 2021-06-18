#include <stdio.h>

int main()
{
	int numeroA = 0;
	int numeroB = 0;
	int contadorPares = 0;
	int contadorImpares =0;

	printf("\nIngrese un numero: ");
	scanf("%i", &numeroA);
	printf("\nIngrese un numero mayor que el anterior: ");
	scanf("%i", &numeroB);

	for (int i = numeroA; i <= numeroB; ++i)
	{
		if (i%2==0)
		{
			contadorPares++;
		}else{
			contadorImpares++;
		}
	}

	printf("\nLa cantidad de numeros pares en el rango es: %i y numeros impares es: %i\n", contadorPares, contadorImpares);
	return 0;
}