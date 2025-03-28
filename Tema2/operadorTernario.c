#include <stdio.h>

int main(){

    int idade = 17;
    int resultadoIdade;
    int temperatura = 31;
    int resultadotemp;
    int maior, num1 = 40, num2 = 60;

    //Lógica Idade
    resultadoIdade = idade >= 18 ? 1 : 0;
    
    if (resultadoIdade ==1){
        printf("Você é maior de idade!\n");
    }
    else{
        printf("Você é menor de idade!\n");  
    }

    //Lógica Temperatura
    temperatura > 30 ? printf("Está calor!\n") : printf("Está frio!\n");

    //Número maior
    num1 > num2 ? (maior = num1) : (maior = num2);
    printf("O número maior é: %d\n", maior);

    if (num1 > num2) {
        printf("O numero maior é: %d\n", num1);
    }
    else {
        printf("O numero maior é: %d\n", num2);
    }

    return 0;

}