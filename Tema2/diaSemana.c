#include <stdio.h>
    int main() {

        int dia;

        printf("Digite o valro do dia: ");
        scanf("%d", &dia);

        switch (dia) {
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda-Feira\n");
                break;
            case 3:
                printf("Terça-Feira\n");
                break;
            case 4:
                printf("Quarta-feira\n");
                break;
            case 5:
                printf("Quinta-Feira");
                break;
            case 6:
                printf("Sexta-Feira\n");
                break;
            case 7:
                printf("Sábado\n");
                break;
            default:
                printf("Dia Inválido\n");
        }
        return 0;
    }
