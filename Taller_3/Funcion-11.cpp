#include <stdio.h>
/*Comentario
Funcion que toma como parametros un vector y su tama�o y diga si el vector esta
ordenado crecientemente.
Fecha: octubre 1 2017
Elaborado por: Luisa Fernanda Andrade Leon */

int orden_vec(int vec[],int largo);
int vec[100],largo;

int main() 
{
	printf("Ingrese longitud del vector \n");
	scanf("%d",&largo);
	
	printf("Ingrese elementos del vector \n");
	for (int i=0;i<largo;i++){
		scanf("%d",&vec[i]);
	}
	orden_vec(vec,largo);
	return 0;
}
int orden_vec(int vec[],int largo){	
	bool verdad;
	for(int i=0;i<largo;i++){
		if (vec[i]>vec[i+1]){
			verdad=true;
			vec++;
		}else{
			verdad=false;
		}		
	}
	if(verdad==true){
		printf("El vector esta en orden crecientemente \n");
	}
	if(verdad==false){			
		printf("El vector NO esta en orden crecientemente \n");
	}
}
