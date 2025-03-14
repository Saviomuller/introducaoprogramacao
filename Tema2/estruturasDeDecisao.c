#include <stdio.h>
int main(){
    
    int idade1 = 17;

    if (idade1 >= 18) {
        printf("Você é maior de idade\n");
    }
    else {
        printf("Você é menor de idade\n");
    }

    float temperatura = 25.0;

    if (temperatura >= 30.0) {
        printf("Está calor\n");
    }
    else {
        printf("Não está calor\n");
    }

    int nota = 55;

    if (nota >= 60) {
        printf("Vocês está aprovado\n");
    }
    else {
        printf("Você está reprovado\n");
    }

    int idade2 = 30;
    int idade3 = 29;

    if (idade2 == idade3) {
        printf("As pessoas tem a mesma idade\n");
    }
    else{
        printf("As pessoas tem idades diferentes\n");
    }

    int numero = 11, resultado;
    resultado = numero % 2;

    printf("A variável resultado é %d\n", resultado);
    if (numero % 2 == 0) {
        printf("O número é par\n");
    }
    else {
        printf("O número é ímpar\n");
    }

    int estoque = 3;

    if(estoque <= 5) {
        printf("Estoque está baixo");
    }
    else {
        printf("O estoque esta bom\n");
    }

}