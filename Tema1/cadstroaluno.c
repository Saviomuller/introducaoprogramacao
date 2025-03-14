#include <stdio.h>

    int main(){
        int idade, matricula;
        float altura;
        char nome[50];

        printf("Digite o seu Nome: \n");
        scanf("%s", &nome);

        printf("Digite a sua Matrícula: \n");
        scanf("%d", &matricula);

        printf("Digite sua Idade: \n");
        scanf("%d", &idade);

        printf("Digite a sua Altura: \n");
        scanf("%f", &altura);

        printf("Nome do Aluno: %s - Matrícula: %d\n", nome, matricula);
        printf("Idade: %d anos - Altura: %.2f M", idade, altura);

        return 0;

    }