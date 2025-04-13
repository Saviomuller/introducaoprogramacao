#include <stdio.h>

int main () {
    int matriz [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int evencount = 0, oddcount = 0;

    // Contagem dos numeros pares e ímpares
    for (int i = 0; i < 3; i++) {
        // Loop externo para as linhas
        for (int j = 0; j < 3; j++) {
            // Loop interno para as colunas
            if (matriz[i][j] % 2 == 0) {
                evencount++; // Incrementa contador de pares
            }
            else {
                oddcount++; // Incrementa contador de ímpares
            }
        }
    }
    for ( int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    

    // Impressão dos resultados
    printf("A Matriz acima possuí a quantidade de:\n");
    printf("%d Números pares\n", evencount);
    printf("%d Números ímpares\n", oddcount);
    
    return 0;
}