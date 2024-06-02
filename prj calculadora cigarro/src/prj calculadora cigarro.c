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

// Função para calcular o número total de cigarros fumados ao longo da vida
int calcularCigAoLongoVida(int anosFumando, int cigarrosPorDia){
    return anosFumando * 365 * cigarrosPorDia; // Multiplica o número de anos fumando pela quantidade diária e pela quantidade de dias em um ano
}

// Função para calcular o total gasto em cigarros ao longo da vida
float calcularTotalGasto (int cigarrosLongoVIda, float preçomaço){
    return (cigarrosLongoVIda / 20) * preçomaço; // Divide o número total de cigarros por 20 (quantidade de cigarros em um maço) e multiplica pelo preço do maço
}

int main(void){
    int anosFumando, cigarrosPorDia;
    float preçoMaço, totalGasto;

    // Solicita as informações ao usuário
    printf("Digite o numero de anos que voce fuma: ");
    fflush(stdout);
    scanf("%d", &anosFumando);

    printf("Digite o preço medio de um maço de cigarros: ");
    fflush(stdout);
    scanf("%f", &preçoMaço);

    printf("Digite o numero de cigarros fumados por dia: ");
    fflush(stdout);
    scanf("%d", &cigarrosPorDia);

    // Calcula o número total de cigarros fumados ao longo da vida
    int cigFumadosAoLongoVida = calcularCigAoLongoVida(anosFumando, cigarrosPorDia);

    // Calcula o total gasto em cigarros ao longo da vida
    totalGasto = calcularTotalGasto(cigFumadosAoLongoVida, preçoMaço);

    // Exibe os resultados
    printf("\n numero de cigarros fumados ao longo da vida: %d", cigFumadosAoLongoVida);
    printf("\nTotal gasto: %.2f", totalGasto);

    return 0;
}
