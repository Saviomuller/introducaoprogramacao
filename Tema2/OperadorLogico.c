#include <stdio.h>
    int main(){

        int a = 5, b =  -10, c = 1;
        //Testando o operador and "&&""
        if ( a > 0 && b > 0){
            printf("Os dois números são positivos\n");
        }
        else{
            printf("Pelo menos um dos numeros é negativo\n");
        }

        //Tesando o operador or "||"
        if ( a > 0 || b > 0){
            printf("Pelo menos um dos numeros é positivo\n");
        }
        else{
            printf("Os dois números são negativos\n");
        }

        // Testando o operador NOT "!"
        if (!a) {
            printf("A variável a é zero\n");
        }
        else {
            printf("A variável 'a' é diferente de zero\n");
        }

        //Sequência de operadores (ordem de execução)
        // Para variável a=5 b=-10 e c=1
        // a > 0 => Verdadeiro
        // b < 0 => Verdadeiro
        // Verdadeiro && Verdadeiro => Verdadeiro 
        // Verdadeiro || c == 0
        // Verdadeiro || Falso => Verdadeiro

        if (a > 0 && b < 0 || c == 0) {
            printf("A condição é Verdadeira");
        }
        else {
            printf("A condição é Falsa");
        }
    }