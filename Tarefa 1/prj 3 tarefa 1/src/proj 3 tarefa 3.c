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
	double salario = 0;
	printf("Digite o salario atual: ");
	scanf("%lf", &salario);
	double aumento = salario * 0.25;
	printf("O aumento foi de: %.2lf", aumento);
	printf("\nO novo salario é: %.2lf", salario + aumento);
}
