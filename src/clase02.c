/*
 ============================================================================
 Name        : clase02.c
 Author      : Juan Manuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int numeroUno;
	int acumular;
	char respuesta;

	acumular=0;

	do
	{
		printf("Por favor ingrese un numero: ");
		fflush(stdin);
		scanf("%d", &numeroUno);

		acumular=acumular+numeroUno;

		printf("Desea continuar? ");
		fflush(stdin);
		scanf("%c", &respuesta);
	} while(respuesta=='s');



	printf("\nLa suma es: %d", acumular);



	return EXIT_SUCCESS;
}
