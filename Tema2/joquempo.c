#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("*** Jogo de Jokempô ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra  \n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    // Gerador Aleatório
    escolhaComputador = rand() % 3 + 1;

    // Impressão Escolha do Jogador
    switch (escolhaJogador) {
        case 1:
            printf("Jogador: Pedra - ");
            break;
        case 2:
            printf("Jogador: Papel - ");
            break;
        case 3:
            printf("Jogador: Tesoura - ");    
            break;
        default:
            printf("Opção Inválida");
            break;
    }

    // Impesssão Escolha do Computador
    switch (escolhaComputador) {
        case 1:
            printf("Computador: Pedra\n");
            break;
        case 2:
            printf("Computador: Papel\n");
            break;
        case 3:
            printf("Computador: Tesoura\n");    
            break;
    }

    // Lógica do Jogo
    if (escolhaComputador == escolhaJogador) {
        printf("### Jogo empatou! ###\n");
    }
    else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
            (escolhaJogador == 2) && (escolhaComputador == 1) ||
            (escolhaJogador == 3) && (escolhaComputador == 2)) {
        printf("### Parabéns Você Ganhou! ###\n");
    }
    else {
        printf("### Você Perdeu! ###\n");
    }

    return 0;
}