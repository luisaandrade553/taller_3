#include <stdio.h>
/*
Calcule el cuadrado del valor que se le transmite y despliegue el resultado. La función deberá ser capaz de elevar al cuadrado números flotantes.
Fecha: 29 Septiembre 2017
Elaborado por: Luisa Fernanda Andrade Leon */

float al_cuadrado(float numero);
int main() {
	float numero;
	
	printf("Ingrese numero \n");
	scanf("%f",&numero);
	printf("El resultado es %f \n",al_cuadrado(numero));
	return 0;
}
float al_cuadrado(float numero){
	float resultado;
	resultado=numero*numero;
	return resultado;
}
