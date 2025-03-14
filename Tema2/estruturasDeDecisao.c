#include <stdio.h>
int main(){
    
    int idade1 = 18;   

    if (idade1 >= 18) {
        printf("Você é maior de idade\n");
    }

    float temperatura = 32.0;

    if (temperatura >= 30.0) {
        printf("Está calor\n");
    }

    int nota = 65;

    if (nota >= 65) {
        printf("Vocês esta aprovado\n");
    }

    int idade2 = 30;
    int idade3 = 30;

    if (idade2 == idade3) {
        printf("As pessoas tem a mesma idade\n");
    }

    int numero = 8, resultado;
    resultado = numero % 2;

    printf("A variável resultado é %d\n", resultado);
    if (numero % 2 == 0) {
        printf("O número é par\n");
    }

    int estoque = 5;

    if(estoque <= 5) {
        printf("Estoque está Baixo");
    }

}