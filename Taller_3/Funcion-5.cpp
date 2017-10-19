#include <stdio.h>
/*Comentario
Funcion que devuelva el valor máximo de tres argumentos que se transmitan a la función cuando sea llamada. Suponga que los tres argumentos serán del mismo tipo de datos
Fecha: 30 septiembre 2017
Elaborado por: Luisa Fernanda Andrade Leon */

int maximo(int digito, int digitoDos, int digitoTres);
int main() {
	int digito;
	int digitoDos;
	int digitoTres;
	printf("Ingrese 3 digitos\n");
	scanf("%d",&digito);
	scanf("%d",&digitoDos);
	scanf("%d",&digitoTres);
	printf("El mayor es %d \n",maximo(digito,digitoDos,digitoTres));
	return 0;
}
int maximo(int digito, int digitoDos, int digitoTres){
	int mayor=digito;
	if(mayor>digitoDos){
		mayor=digito;
	}
	if(digitoDos>mayor){
		mayor=digitoDos;
	}
	if(digitoTres>mayor){
		mayor=digitoTres;
	}
	