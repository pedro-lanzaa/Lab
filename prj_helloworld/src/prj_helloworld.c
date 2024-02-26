/*
 ============================================================================
 Name        : prj_helloworld.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main(void) {
	int idade = 26;
	const int MAX_NUM = 100;

	printf("Minha váriavel int comum = %d\n\n", idade);
	printf("Minha váriavel int constante = %d\n\n", MAX_NUM);
	printf("Minha constante = %d\n", PI);

	// MAX_NUM = 99;

	return EXIT_SUCCESS;

}
