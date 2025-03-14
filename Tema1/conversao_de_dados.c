#include <stdio.h>

    int main(){

    // Trabalhando com Números inteiros    
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Note que a divisão de inteiros resulta em um número inteiro
    
    printf("Soma %d + %d = %d\n", a, b, soma);
    printf("Diferença %d - %d = %d\n", a, b, diferenca);
    printf("Produto  %d * %d = %d\n", a, b, produto);
    printf("Quociente  %d / %d = %d\n", a, b, quociente);

    printf("\n*************************\n\n");

    // Tabalhando com variáveis de ponte flutuantes
    float x = 5.5;
    float y = 2.2;
    float soma1 = x + y;
    float diferenca1 = x - y;
    float produto1 = x * y;
    float quociente1 = x / y; // Divisão de ponto flutuante
 
    printf("Soma %.2f + %.2f = %.2f\n", x, y, soma1);
    printf("Diferença %.2f - %.2f = %.2f\n", x, y, diferenca1);
    printf("Produto  %.2f * %.2f = %.2f\n", x, y, produto1);
    printf("Quociente  %.2f / %.2f = %.2f\n", x, y, quociente1);

    printf("\n*************************\n\n");

    // Trabalhando com Conversão Implicita
    int c = 10;
    float d = 3.5;
    float resultado2 = c + d; // "c" é convertido implicitamente para float
    
    printf("Soma %d + %.2f = %.2f\n", c, d, resultado2);

    printf("\n*************************\n\n");

    // Trabalhando com Conversão Implicita
    int e = 10;
    int f = 3;
    float quociente2 = (float) e / f; //"e" e "f" são convertidos explicitamente para float

    printf(" Quociente %d / %d = %.2f", e, f, quociente2);

    return 0;
}