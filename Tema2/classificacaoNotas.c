#include <stdio.h>
    int main(){

        int nota;

        printf("Digite a Nota: ");
        scanf("%d", &nota);

        //A >= 90
        //B >= 80
        //C >= 70
        //D >= 60
        //E >= 50
        //F > 40

        if (nota >= 90) {
            printf("O conceito é A");
        }
        else if (nota >= 80) {
            printf("O conceito é B");
        }
        else if (nota >= 70) {
            printf("O conceito é C");
        }
        else if (nota >= 60) {
            printf ("O conceito é D");
        }
        else if (nota >= 50){
            printf("O conceito é E");
        }
        else {
            printf("o conceito é F");
        }

        return 0;
        
    }