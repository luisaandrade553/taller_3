#include <stdio.h>
/*Comentario
Funcion que eleve un n�mero entero que se le transmita a una potencia en n�mero entero positivo y despliegue el resultado. El n�mero entero positivo deber� ser el segundo valor transmitido a la funci�n.
Fecha: 29 septiembre 2017
Elaborado por: Luisa Fernanda Andrade Leon */

int funpot(int digito, int potencia);
int main() {
	int digito;
	int potencia;
	
	printf("Ingrese digitos \n");
	scanf("%d",&digito);
	printf("Ingrese digitos \n");
	scanf("%d",&potencia);
	
	printf("El resultado es %d \n",funpot(digito,potencia));
	return 0;
}
int funpot(int digito, int potencia){
	int resultado,j;
	resultado=1;

	for(j=1;j<=potencia;j++){
		resultado=resultado*digito;
	}
	return resultado;
}
