/*
 Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar
 el promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1:  3 - 5 - 7 - 9 - 1
Ejemplo 2:  2 - 1 - 8 -1 - 2
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);



	int numeroIngresado;
	int suma ;
	suma=0;
	int total;
	int i=1;

	  printf("Ingresa 5 numeros:\n");

	  for(i = 1; i <=5; i++){   //Se inicia en 1 para que empiece a contar de 1 a 5


		printf("%d: ", i);

	    scanf("%d",&numeroIngresado);

	    suma = suma + numeroIngresado;
	  }

	  total = suma / 5;
	  printf("El promedio es %d", total);

	return 0;
}
