#include <stdio.h>

int main() {
    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento de Estudadntes\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:

            // Entrada de dados das notas
            printf("Calcular a Média\n");
            printf("Digite a primeira Nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda Nota: ");
            scanf("%f", &nota2);
            
            // Testar se as notas são válidas
            if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
                media = (nota1 + nota2) / 2;
                printf("A média é: %.2f\n,", media);
            }
            else {
                printf("Entrada com notas inválidas\n");
            }
            break;
        case 2:
            printf("Entrar com o valor da média: ");
            scanf("%f", &media);
            media >= 5 ? printf("Aprovado\n") : printf("Reprovado\n");
            break;
        case 3:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção Inválida");
            break;
    }

    return 0;
}