#include <stdio.h>

    int main(){
        
        /*  
        Soma (+)
        Subtração (-)
        Multiplicação(*)
        Divisão (/)        
        */

        int numero1, numero2;
        int soma, subtracao, multiplicacao, divisao;
        
        // Entrada dos dados
        printf("Entre com o numero 1: \n ");
        scanf("%d", &numero1);
        printf("Entre com o numero 2: \n");
        scanf("%d", &numero2);

        printf("***Operadores Básicos***\n");

        // Operação Soma
        soma = numero1 + numero2;
        
        // Operação Subtração
        subtracao = numero1 - numero2;
        
        // Operação Multiplicação
        multiplicacao = numero1 * numero2;
        
        // Operação Divisão
        divisao = numero1 / numero2;

        printf("A soma é: %d\n", soma);
        printf("A subtração é: %d\n", subtracao);
        printf("A multiplicação é: %d\n", multiplicacao);
        printf("A divisão é: %d\n", divisao);

        // Operadores Relacionais

        printf("***Operadores Relacionais***\n");
        int a = 20;
        int b = 20;

        printf("a > b: %d\n", a > b);
        printf("a < b: %d\n", a < b);
        printf("a == b: %d\n", a == b);
        printf("a != b: %d\n", a != b);

        return 0;

    }
