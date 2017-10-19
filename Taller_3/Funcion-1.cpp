#include <stdio.h>
/*
Acepte dos números en punto flotante como parámetros, multiplique estos dos números y despliegue el resultado.
Fecha: 29-septiembre-2017
Elaborado por: Luisa Fernanda Andrade Leon */

 float mult(float digito, float digitoDos);
int main() {
	float digito;
	float digitoDos;
	
	printf("Ingrese digito \n");
	scanf("%f",&digito);
	scanf("%f",&digitoDos);
	printf("El resultado es %f \n",mult(digito,digitoDos));
	
	return 0;
}
float mult(float digito, float digitoDos){
	float resultado;
	resultado=digito*digitoDos;
	return resultado;
}
