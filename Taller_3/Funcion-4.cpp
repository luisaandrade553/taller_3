#include <stdio.h>
/*Comentario
Funcion que devuelva la parte fraccionaria de cualquier n�mero introducido por el usuario. Por ejemplo, si se introduce el n�mero 256.879, deber�a desplegarse el n�mero 0.879
Fecha: 30 septiembre 2017
Elaborado por: Luisa Fernanda Andrade Leon */

float fra_(float digito);
int main() {
	float digito;
	
	printf("Ingrese digito \n");
	scanf("%f",&digito);
	printf("El fraccionario es %.4f \n",fra_(digito));
	return 0;
}
float fra_(float digito){
	float fracc;
	int num;
	
	num=digito;
	fracc=digito-num;
	return fracc;
}
