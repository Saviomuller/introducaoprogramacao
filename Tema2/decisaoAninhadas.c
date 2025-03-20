#include <stdio.h>
    int main (){

        /*
        Programa identifica se uma pessoa está qualificade para um desconto especial,
        com base na idade e na renda mensal.
        A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter uma renda mensal abaixo de 2000 reais
        */

        int idade;
        float renda;

        // Entrada de dados
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("Digite a sua renda mensal: ");
        scanf("%f", &renda);

        // Lógica do programa
        if (idade <= 18 || idade >= 60)
        {
            if (renda < 2000) {
                printf("Você tem direito ao desconto!\n");
            }
            else {
                printf("Você não tem direito ao desconto devido a renda!\n");
            }
        }
        else {
            printf("Recusado em relação a idade!\n");
        }
        
    }