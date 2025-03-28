#include <stdio.h>

int main(){

    int idade = 17;
    int resultadoIdade;
    int temperatura = 31;
    int resultadotemp;

    // Lógica Idade
    resultadoIdade = idade >= 18 ? 1 : 0;
    
    if (resultadoIdade ==1){
        printf("Você é maior de idade!\n");
    }
    else{
        printf("Você é menor de idade!\n");  
    }

    //Lógica Temperatura
    temperatura > 30 ? printf("Está calor!\n") : printf("Está frio!\n");

    return 0;

}