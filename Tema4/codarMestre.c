# include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main() {

    int target;
    int found = 0;
    int soma = 1;
    int matriz [LINHA][COLUNA];

    // Dados para o preenchimento da Matriz
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    // Escolhendo o numero para buscar
    printf("Escolha um número para buscar entre '1' e '%d': ", matriz[COLUNA - 1][LINHA - 1]);
    scanf("%d", &target);
    
    
    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (matriz[i][j] == target) {
                printf("O valor %d se encontra no indice (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    

    return 0;
}