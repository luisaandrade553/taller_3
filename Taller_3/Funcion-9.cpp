#include <stdio.h>
/*Comentario
Funcion que tenga un par�metro en n�mero entero llamado totalSeg y tres par�metros de referencia enteros nombrados horas, min y seg. La funci�n es convertir el n�mero de segundos transmitido en un n�mero equivalente de horas, minutos y segundos
Fecha: 1 octubre 2017
Elaborado por: Luisa Fernanda Andrade Leon */

void calcular(int totaldias, int anio, int mes, int dia, int &a, int &m, int &d);

int main() {
	int totaldias,anio,mes,dia,a,d,m;
	a=30;
	d=40;
	m=50;
	printf("Ingrese la cantidad de dias \n");
	scanf("%d",&totaldias);
	
	calcular(totaldias, anio, mes, dia,a,d,m);
	
	printf("La fecha es: \n %d dia:%d mes:%d ano \n",d,m,a);
	return 0;
}
void calcular(int totaldias, int anio, int mes, int dia, int &a, int &m, int &d)
{
	int valor;
    a=2000;
	d=1;
	m=1;
	
	anio=totaldias/365;
	valor=totaldias-(anio*365);
	mes=valor/30;
	dia=valor-(mes*30);
	
	a+=anio;
	d+=dia;
	m+=m;
}
