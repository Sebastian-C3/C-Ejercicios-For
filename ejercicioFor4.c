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

#define MJS_INGRESE_ENERGIA "Ingrese energia: "
#define MSJ_INGRESE_RECURSO_1 "Ingrese stock del recurso 1: "
#define MSJ_INGRESE_RECURSO_2 "Ingrese stock del recurso 2: "
#define MSJ_INGRESE_RECURSO_3 "Ingrese stock del recurso 3: "
#define MSJ_INICIAR_PROD "Iniciando produccion"
#define MSJ_CICLO_PROD "Ciclo de produccion finalizado"
#define MSJ_FALTA_STOCK "Ciclo de produccion interrumpido por falta de stock"
#define MSJ_ENERGIA_INSUFICIENTE "Cantidad de energia insuficiente"
#define MSJ_PRODUCTOS_PRODUCIDOS "Cantidad de productos producidos: "
#define MSJ_ENERGIA_REST "Energia restante: "
#define MSJ_STOCK_REST_1 "Stock restante de recurso 1: "
#define MSJ_STOCK_REST_2 "Stock restante de recurso 2: "
#define MSJ_STOCK_REST_3 "Stock restante de recurso 3: "

int main(){

	float cantRecurso1 = 0;
	float cantRecurso2 = 0;
	float cantRecurso3 = 0;
	int energiaIngresada = 0;
	int contadorCiclos = 0;
	int energiaConsumida = 0;

	printf("\n%s",MJS_INGRESE_ENERGIA);
	scanf("%i", &energiaIngresada);
	

	if(energiaIngresada >= ENERGIA_MINIMA_REQUERIDA ){
		printf("%s", MSJ_INGRESE_RECURSO_1);
		scanf("%f", &cantRecurso1);
		printf("%s", MSJ_INGRESE_RECURSO_2);
		scanf("%f", &cantRecurso2);
		printf("%s", MSJ_INGRESE_RECURSO_3);
		scanf("%f", &cantRecurso3);
		printf("\n%s\n", MSJ_INICIAR_PROD); 
		for(int i = ENERGIA_MINIMA_REQUERIDA ; i <= energiaIngresada ; i = i+ENERGIA_MINIMA_REQUERIDA ){

			if (cantRecurso1 >= CONSUMO_RECURSO_1 && cantRecurso2 >= CONSUMO_RECURSO_2 && cantRecurso3 >= CONSUMO_RECURSO_3)
			{
				printf("\n%s", MSJ_CICLO_PROD);
				cantRecurso1 = cantRecurso1 - CONSUMO_RECURSO_1;
				cantRecurso2 = cantRecurso2 - CONSUMO_RECURSO_2;
				cantRecurso3 = cantRecurso3 - CONSUMO_RECURSO_3;
				contadorCiclos++;
				energiaConsumida = i;
			}else{
				printf("\n%s", MSJ_FALTA_STOCK); 
				i = energiaIngresada+1;
			}	
		}
	}else{
		printf("\n%s\n", MSJ_ENERGIA_INSUFICIENTE);
	}

	printf("\n---------------Informe----------------");
	printf("\n%s%i", MSJ_PRODUCTOS_PRODUCIDOS, contadorCiclos*PRODUCTOS_POR_CICLO);
	printf("\n%s%i", MSJ_ENERGIA_REST, energiaIngresada - energiaConsumida);
	printf("\n%s%.2f", MSJ_STOCK_REST_1, cantRecurso1);
	printf("\n%s%.2f", MSJ_STOCK_REST_2, cantRecurso2);
	printf("\n%s%.2f", MSJ_STOCK_REST_3, cantRecurso3);

	return 0;
}