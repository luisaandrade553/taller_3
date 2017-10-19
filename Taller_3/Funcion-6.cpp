#include <stdio.h>
/*Comentario
Funcion Intercambiar el valor de 2 variables utilizando paso de parámetros por referencia.
Fecha: 30 septiembre 2017
Elaborado por: Luisa Fernanda Andrade Leon */

int intercambiar(int &l, int &m);
int main() {
	int digitoUno;
	int digitoDos;
	
	printf("Ingrese los digitos\n");
	scanf("%d", &digitoUno);
	scanf("%d", &digitoDos);
	
	intercambiar(digitoUno, digitoDos);
	printf("El resultado es %d,%d\n", digitoUno, digitoDos);
	return 0;
}
int intercambiar(int &l, int &m){
	
	l=10;
	m=20;
	return l,m ;
}



	return mayor;
}

