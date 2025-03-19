#include <stdio.h>

    int main(){

        /*Programa para verificar requisitos de idade e altura de uma pessoa   
        Idade entre 18 e 30 anos
        Altura maior que 1,70 m */
    
        int idade = 15;
        float altura = 1.75;

        if (idade >= 18 && idade <= 30 && altura > 1.70) {
            printf("Você está na faixa etária e tem a altura adequada\n");
        }
        else {
            printf("Você não atende aos critérios\n");
        }
    }