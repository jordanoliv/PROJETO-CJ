/*
 ============================================================================
 Name        : cj.c
 Author      : jordan
 Version     :
 Copyright   : Your copyright notice
 Description : primeiro projeto
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void) {
	int idade =19;
	const int MAX_NUM = 100;

	printf ("Minha variável int comum = %d\n\n", idade);
	printf ("Minha variável int constante = %d\n\n", MAX_NUM);
	printf ("Minha constante = %f\n",PI);

	// MAX_NUM = 99;

	return EXIT_SUCCESS;
}
