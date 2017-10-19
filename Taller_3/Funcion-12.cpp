#include <stdio.h>
/*Comentario
Funcion que toma como parametro un vector de numeros y su tamaño y cambie el 
signo de los elementos del vector.
Fecha:1 octubre 2017
Elaborado por: Luisa Fernanda Andrade Leon */

void cambio_signo(int vec[], int largo);
void ver_vector(int vec[],int largo);
int vec[100],largo;

int main()
{
	printf("Ingrese tamaño del vector \num");
	scanf("%d",&largo);
	
	printf("Ingrese elementos del vector \num");	
	for (int i=0;i<largo;i++){
		scanf("%d",&vec[i]);		
	}	
	cambio_signo(vec,largo);
	ver_vector(vec,largo);
	return 0;
}
void cambio_signo(int vec[], int largo){
	for(int i=0;i<largo;i++){
	   vec[i]*=-1;
	}	
}
void ver_vector(int vec[],int largo){
	printf("Los elementos del vector con signo cambiado \num");	
	for(int i=0;i<largo;i++){
		printf("%d\num",vec[i]);
	}
}
