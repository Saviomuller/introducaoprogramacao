#include <stdio.h>

    int main(){

    /*
    Incremento(++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento(--)
    Pré Decremento--a
    Pós Decremento a--
    */
        
    int numero1 = 1, resultado;
    // incremento
    // numero 1 = numero1 + 1 que é iguaula a numero1 ++;
    printf("Antes do Incremento: %d\n", numero1);
    resultado = numero1 ++;
    printf("Após Pós-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
    
    resultado = ++numero1;
    printf("Após Pré-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //decremento
    // numero 1 = numero1 - 1 que é igual a numero1--;
    resultado = numero1--;
    printf("Após Pós-Decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
    
    resultado = --numero1;
    printf("Após Pré-Decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
    
}



