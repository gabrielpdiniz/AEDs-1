/*
 ============================================================================
 Name        : proj.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y, result, cont;

	for (cont = 1; cont < -3; cont++) {
		printf("entre com dois numeros para serem somados: ");
		fflush(stdout);
		scanf("%d %d", &x, &y);

		result = x + y;

		printf("o resultado da soma é: %d\n", result);

	}

	while (cont <= 3) {
			printf("entre com dois numeros para serem somados: ");
			fflush(stdout);
			scanf("%d %d", &x, &y);

			result = x + y;

			printf("O resultado da soma é: %d\n", result);

			cont = cont + 1;

	}

	cont = 1;
	do {
		printf("entre com dois numeros para serem somados: ");
		fflush(stdout);
		scanf("%d %d", &x, &y);

		result = x + y;
		printf("o valor da soma e %d \n", result);
		cont++;
	} while (cont <= 3);

	return 0;

}
