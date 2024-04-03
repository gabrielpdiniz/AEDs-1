/*
 ============================================================================
 Name        : prj.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	char palavra[100];
	int i, j, tamanho;
	int palindromo = 1;

	printf("Digite uma palavra: ");
	scanf("%s", palavra);

	tamanho = strlen(palavra);

	// Verificar se e um palindromo
	for(i = 0, j = tamanho - 1; i < j; i++, j--) {

		printf("i: %c\n", palavra[i]);
		printf("j: %c\n", palavra[j]);

		if(palavra[i] != palavra[j]) {
			palindromo = 0;
			break;
		}
	}
	if(palindromo) {
		printf("\nA palavra é um palindromo. \n");
	} else {
		printf("\nA palavra nao é um palindromo. \n");

	}
}
