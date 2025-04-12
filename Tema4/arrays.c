#include <stdio.h>

int main() {
    // Declarando um array, com tamanho de 5, e atribuindo os valores
    float notas[5] = {85.5, 90.0, 75.5, 89.3, 66.7};
    char *nomes[4] = {"Savio", "Fabiane", "Davi", "Samuel"};
    
    //Forma de imprimir os valores linha por linha
    printf("A primeira nota é: %.2lf\n", notas[0]);
    printf("A Segunda nota é: %.2lf\n", notas[1]);
    printf("A Terceira nota é: %.2lf\n", notas[2]);
    printf("A Quarta nota é: %.2lf\n", notas[3]);
    printf("A Quinta nota é: %.2lf\n", notas[4]);
    

    // Lógica para fazer a impressão de cada casa da array


    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", nomes[i]);
    }
    
    return 0;
}