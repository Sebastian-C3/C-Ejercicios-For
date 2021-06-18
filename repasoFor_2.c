/* 
	Definir correctamente el iterador, la condicion de corte y el incremento de una estructura for
	Para que se impriman "Di una vuelta al parque!" 7 veces
	extra 1: que comience en la vuelta numero 3
	extra 2: imprimir junto al mensaje el numero de vueltas correspondiente
 */

#include <stdio.h>

int main(){

	for(int i = 0 ; i <7 ; i++ ){

		printf("\nDi una vuelta al parque, voy %i\n", i+1 );

		if(i>1){
			printf("\n-------->Extra 1, di una vuelta al parque, voy %i\n", i+1);
		}
	}

	return 0;
}