#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funçao para lancar um dado
int rolarDado() {
	return rand() % 6 + 1; // Gera um numero aleatorio entre 1 e 6
}

// Funçao para calcular a soma dos valores dos dados
int calcularSoma(int dado1, int dado2) {
	return dado1 + dado2;
}

int main(void) {
	int jogador1[2], jogador2[2];
	int somaJogador1, somaJogador2;
	srand(time(NULL)); // Semente para a funcao rand()

	printf("Jogador 1, pressione ENTER para rolar os dados.\n");
	getchar(); // Espera o jogador 1 pressionar ENTER
	jogador1[0] = rolarDado(); // Lança o primeiro dado do jogador 1
	jogador1[1] = rolarDado(); // Lança o segundo dado do jogador 1

	printf("Jogador 1: %d + %d\n", jogador1[0], jogador1[1]);
	somaJogador1 = calcularSoma(jogador1[0], jogador1[1]);
	printf("Soma do Jogador 1: %d\n", somaJogador1);

	printf("\nJogador 2, pressione ENTER para rolar os dados.\n");
		getchar(); // Espera o jogador 2 pressionar ENTER
		jogador2[0] = rolarDado(); // Lança o primeiro dado do jogador 2
		jogador2[1] = rolarDado(); // Lança o segundo dado do jogador 2

		printf("Jogador 2: %d + %d\n", jogador2[0], jogador2[1]);
		somaJogador2 = calcularSoma(jogador2[0], jogador2[1]);
		printf("Soma do Jogador 2: %d\n", somaJogador2);

		if(somaJogador1 > somaJogador2) {
			printf("O Jogador 1 Venceu!");
		} else if(somaJogador1 < somaJogador2) {
			printf("O Jogador 2 Venceu!");
		} else {
			printf("Empate!");
		}
			return 0;
}
