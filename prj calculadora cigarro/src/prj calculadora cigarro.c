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

int calcularCigAoLongoVida(int anosFumando, int cigarrosPorDia){
	return anosFumando * 365 * cigarrosPorDia;
}

float calcularTotalGasto (int cigarrosLongoVIda, float preçomaço){
	return(cigarrosLongoVIda/20) * preçomaço;
}

int main(void){
	int anosFumando, cigarrosPorDia;
	float preçoMaço, totalGasto;

	printf("Digite o numero de anos que voce fuma: ");
	fflush(stdout);
	scanf("%d", &anosFumando);

	printf("Digite o preço medio de um maço de cigarros: ");
	fflush(stdout);
	scanf("%f", &preçoMaço);

	printf("Digite o numero de cigarros fumados por dia: ");
	fflush(stdout);
	scanf("%d", &cigarrosPorDia);

	int cigFumadosAoLongoVida = calcularCigAoLongoVida(anosFumando, cigarrosPorDia);

	totalGasto = calcularTotalGasto(cigFumadosAoLongoVida, preçoMaço);

	printf("\n numero de cigarros fumados ao longo da vida: %d", cigFumadosAoLongoVida);

	printf("Total gasto: %.2f", totalGasto);

	return 0;

}
