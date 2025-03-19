#include <stdio.h>
    
    int main(){

        int idade;

        printf("Digite a sua idade: \n");
        scanf("%d", &idade);
    
        // Criança < 12 anos
        // Adolescente 12 <= x => 18 anos
        // Adulto 18 <= x < 60 anos
        // Idoso > 60 anos
    
        if (idade < 12){
            printf("Você é uma criança!\n");
        }
        else if (idade >= 12 && idade < 18){
            printf("Você é um adolescente!\n");
        }
        else if (idade >= 18 && idade < 60){
            printf ("Você é um adulto!\n");
        }
        else{
            printf("Você é um idoso!\n");
        }

        return 0;
    }