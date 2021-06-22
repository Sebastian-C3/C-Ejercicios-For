/*
	Software de produccion
	Desarrollar un algoritmo que permita producir cierta cantidad de productos
	dependiendo de la energia y recursos
	
	Aspectos a tener en cuenta:
		- La maquina solo funciona si hay 25% de energia
		- Cada uso de la maquina permite producir 5 productos
		- Cada producto requiere:
			- 0.5 KG del recurso1
			- 2 L del recurso2
			- 1.7 KG del recurso3
			2.5
			10
			5.1
	Requisitos:
		• Solicitar al usuario:
			- Energia inicial de la maquina
			- Stock de recursos
		• Producir la cantidad de productos correspondientes
		• Informar finalmente:
			- Energia restante
			- Productos producidos
			- Stock restante de recursos
	EXTRA: Parar la maquina en caso de que no sea posible producir mas productos evitando
			un uso innecesario de la misma

	
			
*/

#include <stdio.h>

const float CONSUMO_RECURSO_1 = 0.5;
const float CONSUMO_RECURSO_2 = 2;
const float CONSUMO_RECURSO_3 = 1.7;
const int PRODUCTOS_POR_CICLO = 5;
const int ENERGIA_MINIMA_REQUERIDA = 25;

#define MSJ_INGRESE_RECURSO_1 "Ingrese stock del recurso 1: "

int main(){

	float cantRecurso1 = 0;
	float cantRecurso2 = 0;
	float cantRecurso3 = 0;
	int energiaIngresada = 0;
	int contadorCiclos = 0;
	int energiaConsumida = 0;

	printf("\nIngrese energia: ");
	scanf("%i", &energiaIngresada);
	

	if(energiaIngresada >= ENERGIA_MINIMA_REQUERIDA ){
		printf("%s", MSJ_INGRESE_RECURSO_1);
		scanf("%f", &cantRecurso1);
		printf("Ingrese stock del recurso 2: ");
		scanf("%f", &cantRecurso2);
		printf("Ingrese stock del recurso 3: ");
		scanf("%f", &cantRecurso3);
		printf("\nIniciando produccion\n"); 
		for(int i = ENERGIA_MINIMA_REQUERIDA ; i <= energiaIngresada ; i = i+ENERGIA_MINIMA_REQUERIDA ){

			if (cantRecurso1 >= CONSUMO_RECURSO_1 && cantRecurso2 >= CONSUMO_RECURSO_2 && cantRecurso3 >= CONSUMO_RECURSO_3)
			{
				printf("\nCiclo de produccion finalizado");
				cantRecurso1 = cantRecurso1 - CONSUMO_RECURSO_1;
				cantRecurso2 = cantRecurso2 - CONSUMO_RECURSO_2;
				cantRecurso3 = cantRecurso3 - CONSUMO_RECURSO_3;
				contadorCiclos++;
				energiaConsumida = i;
			}else{
				printf("\nCiclo de produccion interrumpido por falta de stock"); 
				i = energiaIngresada+1;
			}	
		}
	}else{
		printf("\nCantidad de energia insuficiente\n");
	}

	printf("\n---------------Informe----------------");
	printf("\nCantidad de productos producidos: %i", contadorCiclos*PRODUCTOS_POR_CICLO);
	printf("\nEnergia restante: %i", energiaIngresada - energiaConsumida);
	printf("\nStock restante de recurso 1: %.2f", cantRecurso1);
	printf("\nStock restante de recurso 2: %.2f", cantRecurso2);
	printf("\nStock restante de recurso 3: %.2f", cantRecurso3);

	return 0;
}