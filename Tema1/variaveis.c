#include <stdio.h>

    int main (){

        int idade; //Serve para armazenar valores inteiros
        int quantidade; //Serve para armazenar valores inteiros
        float altura; // Serve para armazenar numeros com casas decimais
        double peso; // Serve para armazenar numeros com mais casas decimais e com valores maiores, possui maior precisao 
        char sexo; // Serve para armazenar caracteres unicos
        char nome[20]; //  Serve para armazenar caracteres "array" precisar ser declarada a quantidade de caracteres
        char sobrenome[20]; //  Serve para armazenar caracteres "array" precisar ser declarada a quantidade de caracteres

        // Sintaxe Scanf - que faz a leitura de dados digitados
        
        printf("Digite o nome do paciente: ");
        scanf("%s", nome);
        
        printf("Digite o sobrenome do paciente: ");
        scanf("%s", sobrenome);

        printf("Digite a letra inicial correpondente ao sexo do paciente: ");
        scanf(" %c", &sexo);

        printf("Digite a idade do paciente: ");
        scanf("%d", &idade);

        printf("Digite a altura do paciente em cm: ");
        scanf("%f", &altura);

        printf("Digite o peso do paciente em Kg: ");
        scanf("%lf", &peso);
        
        // Impressão dos dados armezenados das respectivas variávies
        
        printf("Nome: %s %s \n",nome, sobrenome);
        printf("Paciente do sexo %c com %d anos de Idade\n",sexo, idade);
        printf("Medindo %.0f cm de altura e pesando %.3lf Kg\n", altura, peso);

        /* Modificadores de Formato
            
            %d: Imprime um inteiro no formato decimal.
 
            %i: Equivalente a %d.
 
            %f: Imprime um número de ponto flutuante no formato padrão.
 
            %e: Imprime um número de ponto flutuante na notação científica.
 
            %c: Imprime um único caractere.
 
            %s: Imprime uma cadeia (string) de caracteres.
        
        */

    }