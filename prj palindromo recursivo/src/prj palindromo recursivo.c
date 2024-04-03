/*
 ============================================================================
 Name        : prj.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char str[], int left, int right) {
	return (left >= right) ? 1 : (str[left] == str[right]) && isPalindrome(str, left + 1, right - 1);
}

int main(void) {
	char palavra[100];
	printf("Digite uma palavra: ");
	fflush(stdout);
	scanf("%s", palavra);

	int tamanho = strlen(palavra);
	printf("%d", tamanho);
	// Verificar se e um palindromo
	if (isPalindrome(palavra, 0, tamanho - 1)) {
		printf("\nA palavra e um palindromo. \n");
	} else {
		printf("\nA palavra nao e um palindromo");
	}

	return 0;
}
