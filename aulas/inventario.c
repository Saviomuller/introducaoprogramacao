#include <stdio.h>

    int main(){

        //Declarar Variáveis
        char produtoA[30] = "Produto A";
        char produtoB[30] = "Produto B";

        unsigned int estoqueA = 1000;
        unsigned int estoqueB = 2000;
        
        float valorA = 10.50;
        float valorB = 20.40;

        unsigned int estoqueMinimoA = 500;
        unsigned int estoqueMinimoB = 2500;

        double valorTotalA;
        double valorTotalB;

        int resultadoA, resultadoB;

        //Exibir Informaçãoes do produto
        printf(" %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
        printf (" %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);


        //Comparações com o valor mínimo de estoque
        resultadoA = estoqueA > estoqueMinimoA;
        resultadoB = estoqueB > estoqueMinimoB;

        printf("O %s tem estoque mínimo %d\n", produtoA, resultadoA);
        printf("O %s tem estoque mínimo %d\n", produtoB, resultadoB);

        //Comparação entre os valores totais dos produtos
        printf("O valor total do Produto A (R$ %.2f) é maior que o valor total do Produto B (R$ %.2f)? %d\n", 
                                                estoqueA * valorA, estoqueB * valorB,
                                            (estoqueA * valorA) > (estoqueB * valorB));

    }