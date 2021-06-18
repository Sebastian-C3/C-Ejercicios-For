/* 
	Ejercicio 3 for
	
	Celular
		Desarrollar una aplicacion que permita informar cuantos usos tiene un dispositivo respecto a un consumo
		
		El total de la bateria es 100% inicialmente
		El consumo es ingresado por el usuario
		Finalmente se informara la cantidad de usos totales posibles
	
		ej: 
			Ingresando que el consumo es del 15%
		 	Informe: Son posibles 6 usos
		EXTRA: informar al final del informe la bateria restante que quedaria sin usar
 */

#include <stdio.h>

const int BATERIA_CARGADA = 100;

int main(){

	int cantidadUsos = 0;
	int consumoIngresado = 0;
	int bateriaRestante = 0;

	printf("\nIngrese el porcentaje de consumo de cada uso: ");
	scanf("%i", &consumoIngresado);


	for( int i = consumoIngresado; i <= BATERIA_CARGADA ; i=i+consumoIngresado){

		//printf("\ni = %i", i);
		cantidadUsos++;
		bateriaRestante = BATERIA_CARGADA-i;


	}

	if (cantidadUsos != 1)
	{
		printf("\nInforme: Son posibles %i usos\n", cantidadUsos);
	}else{
		printf("\nInforme: Es posible %i uso\n", cantidadUsos);
	}
	
	printf("\nBateria restante que queda sin utilizar: %i\n", bateriaRestante);

	return 0;
}