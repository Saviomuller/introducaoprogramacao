#include <Stdio.h>
#include <stdlib.h>
#include <time.h>

    int main() {

    int opcao, numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma Opção\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        // Gerador de números aleatórios sendo armazenado na variável numeroSecreto
        srand(time(0)); 
        numeroSecreto = rand() % 10 + 1;

        // Entrada de dados do palpite
        printf("Digite um número de 0 a 10: \n");
        scanf("%d", &palpite);

        // Lógica do Jogo
        if (numeroSecreto == palpite) {
            printf("Você Acertou\n");
        }
        else {
            printf("Você Errou!\n");
            printf("Numero Secreto: %d", numeroSecreto);
        }
        break;
    case 2:
        printf("As regras do jogo são .......\n");
        break;
    case 3:
        printf("Saindo do Jogo\n");
        break;
    default:
        printf("Opção Inválida\n");
        break;
    }
}