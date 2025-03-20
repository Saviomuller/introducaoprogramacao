#include<stdio.h>
    int main(){
        
        // Programa para testar se numero é par ou impar, negativo ou zero.
        
        int numero;;
        // Entrada de dados
        printf("Digite o número: ");
        scanf("%d", &numero);

        //Lógica do programa
        if (numero > 0) {
            if (numero % 2 == 0)
            {
                printf("O numero é par!\n");
            }
            else {
                printf("O núero é ímpar!\n");
            }
        }        
        else if (numero == 0){
            printf("Número igual a zero!");
        }
        else {
            printf("O número é negativo!\n");
        }
    }