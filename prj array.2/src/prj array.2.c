/*
 ============================================================================
 Name        : 2.c
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

	// Declaraçao de um array de strings para armazenar tres nomes
	char nomes[3][30]; // Supondo nomes com ate 30 caracteres

	// Solicite ao usuario ára inserir tres nomes
	for (int i = 0; i < 3; i++) {
		printf("Digite o %d° nome: ", i + 1);
		scanf("%s", nomes[i]);
	}

	// Imprimir os nomes na ordem inversa
	printf("\nNomes na ordem inversa:\n");
	for (int i = 2; i >= 0; i--) {
		printf("%s\n", nomes[1]);
	}

	// Imprimir os nomes e seus comprimentos
	printf("\nNomes e comprimentos:\n");
	for (int i = 0; i < 3; i++) {
		printf("%s - Comprimento: %zu\n", nomes[i], strlen(nomes[i]));
		//%zu e um especificador de formato usado em linguagem C para imprimir valores do tipo s:
		//Ele e particularmente util quando voce estra trabalhando com funçoes que retornam valores
		//como strlen, que retorna o comprimento de uma string.
	}
}
