#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main() {
        int numeroJogador, numeroComputador, resultado;
        char tipoComparacao;

        // Gerar números aleatórios
        srand(time(0));
        numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

        // Início do Jogo
        printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
        printf("Você deve escolher um número e o tipo de comparação.\n");
        printf("M. Maior\n");
        printf("N. Menor\n");
        printf("I. Igual\n");

        printf("Escolha a comparação: ");;
        scanf(" %c", &tipoComparacao);

        printf("Digite seu número (Entre 1 a 100): ");
        scanf("%d", &numeroJogador);

        //Exibir número do computador
        //printf("O número do computador é: %d\n", numeroComputador);

        switch (tipoComparacao) {
        case 'M':
        case 'm': 
            printf("Você escolhei a opção maior!\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            break;
        case 'N':
        case 'n':
            printf("Você escolhei a opção menor!\n");
            resultado = numeroJogador < numeroComputador ? 1 : 0;
            break;
        case 'I':
        case 'i':
            printf("Você escolhei a opção igual!\n");
            resultado = numeroJogador == numeroComputador ? 1 : 0;
            break;
        default:
            printf("Opção de jogo Inválida!");
            break;
        }
        
        printf("O número do computador é: %d e o numero do jogador é: %d\n", numeroComputador, numeroJogador);

        if (resultado == 1) {
            printf("Parabéns, você venceu!\n");
        }
        else {
            printf("Infelizmente, você perdeu!\n");
        }
    }