#include <stdio.h>

int main(){

    int i = 0;
    int numero, numero1, e;
    
    //Exemplo da estrutura While
    while (i <= 10) {
        
        if(i % 2 == 0) {
            printf("O número %d é par!\n", i);
        }
        
        i++;
    }
    
    //Exemplo da estrutura do-while
    do {

        printf("Digite um número par para sair do programa:");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("%d é par!\n", numero);
        }
        else {
            printf("%d é ímpar!\n", numero);
        }

    }
    while (numero % 2 != 0);

    printf("Você digitou um número par, saindo do programa\n");

    // Exemplo da estrutura For
    printf("Digite um número para calcularmos a tabuada: ");
    scanf("%d", &numero1);

    for (e = 0; e <= 10; e++) {
        printf("%d x %d = %d\n",e, numero1, e * numero1);
    }
       
    return 0;
}