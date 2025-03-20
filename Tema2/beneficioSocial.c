#include<stdio.h>
    int main() {

        // Programa para analisar a liberação de recurso social
        // A primeira condição idade do usuário estar entre 18 e 65 anos
        // A segunda condição se a renda é menor que 3000 reais mensal
        // A terceira condição verifica se o numero de dependentes é maior que 2

        int idade, dependentes;
        float renda;

        // Entrrada de dados
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("Digite a sua renda: ");
        scanf("%f", &renda);
        printf("Digite o número de dependentes: ");
        scanf("%d", &dependentes);

        // Lógica do programa
        if (idade >= 18 && idade < 65) {
            if (renda < 3000) {
                if (dependentes > 2) {
                    printf("Você atende a todos os critérios\n");
                }
                else {
                    printf("Você não atende ao critério dependentes!\n");
                }
            }
            else {
                printf("Você não atende ao critério renda!\n");
            }
        }
        else {
            printf("Você não atende ao critério de idade!\n");
        }




    }