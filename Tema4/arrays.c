#include <stdio.h>

int main() {
    // Declarando um array, com tamanho de 5, e atribuindo os valores
    float notas [5] = {85.5, 90.0, 75.5, 89.3, 66.7};

    printf("A primeira nota é: %.2lf\n", notas[0]);
    printf("A Segunda nota é: %.2lf\n", notas[1]);
    printf("A Terceira nota é: %.2lf\n", notas[2]);
    printf("A Quarta nota é: %.2lf\n", notas[3]);
    printf("A Quinta nota é: %.2lf\n", notas[4]);

    return 0;
}