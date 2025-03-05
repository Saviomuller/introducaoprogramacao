# include <stdio.h>

    int main(){

        //Criação das Variáveis
        float nota1, nota2, nota3, media;    

        //Entrada das Notas
        printf("*** Cálculo de Média ***\n");

        printf("Digite a primeira nota: \n");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: \n");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: \n");
        scanf("%f", &nota3);

        //Funcão para o cálculo das médias

        media =( nota1 + nota2 + nota3 ) / 3;
        printf("A Média é: %.1f", media);

        return 0;

    }