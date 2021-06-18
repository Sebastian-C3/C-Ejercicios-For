/* 
	FACTURA 
	Desarrollar un software para llevar un conteo de ventas
	con las cuales tendremos 2 tipos: venta con descuento y venta normal
	
	Requisitos: 
		• debe permitirse al usuario indicar si posee un descuento o no y dependiendo de
		  la informacion se procedera a realizar la venta correspondiente
		• la cantidad de productos totales son ingresados por el usuario
		• finalmente se debe imprimir un informe
	ej: total de productos = 10
		si el usuario ingresa 5 veces compras con descuento entonces
			las ventas con descuento finaliza con un valor de 5
			y las ventas normales finaliza con un valor de 5
		informe:
			total de ventas = 10
			total de ventas con descuento = 5
			total de ventas normales = 5
	EXTRA: permitir al usuario ingresar el costo del producto y realizar un descuento en caso necesario
		   en el informe agregar el costo final total y el valor ahorrado
 */

#include <stdio.h>
#include <stdbool.h>

const float DESCUENTO_APLICADO = 0.90;

int main(){

	bool tieneDescuento = false;
	int numeroBool = 0;
	int cantidadProductos = 0;
	int cantidadProductosDescuento = 0;
	float precioProducto = 0;
	float totalCompra = 0;


	printf("\nIngrese la cantidad total de productos comprados: ");
	scanf("%i", &cantidadProductos);


	for (int i = 0; i < cantidadProductos; i++)
	{
		printf("\nIngrese el precio del producto %i: $", i+1);
		scanf("%f", &precioProducto);
		printf("\nIndique si posee un descuento en el producto %i\n\t[0] - No \n\t[1] - Si\nOpcion: ",i+1);
		scanf("%i", &numeroBool);
		tieneDescuento = numeroBool;

		if(tieneDescuento){
			cantidadProductosDescuento++;
			totalCompra = totalCompra + precioProducto * DESCUENTO_APLICADO;
		}else{
			totalCompra = totalCompra+precioProducto;
		}
	
	}

	printf("\n-------------Informe-------------");
	printf("\nTotal de ventas = %i", cantidadProductos);
	printf("\nTotal de ventas con descuento = %i", cantidadProductosDescuento);
	printf("\nTotal de ventas normales = %i", cantidadProductos - cantidadProductosDescuento);
	printf("\n\nEl importe total es: $%.2f\n", totalCompra);

	return 0;
}