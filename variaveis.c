#include <stdio.h>

int main() {
    // Declaração de variáveis
    int idade;
    float altura;
    double peso, imc;
    char sexo;
    char nome[20];
    char sobrenome[20];

    // Entrada de dados
    printf("Digite o nome do paciente: ");
    scanf("%s", nome);

    printf("Digite o sobrenome do paciente: ");
    scanf("%s", sobrenome);

    printf("Digite a letra inicial correspondente ao sexo do paciente: ");
    scanf(" %c", &sexo);

    printf("Digite a idade do paciente: ");
    scanf("%d", &idade);

    printf("Digite a altura do paciente em cm: ");
    scanf("%f", &altura);

    // Correção: usar %lf para ler um double e passar o endereço de peso
    printf("Digite o peso do paciente em Kg: ");
    scanf("%lf", &peso);

    // Cálculo do IMC (Índice de Massa Corporal)
    // Converter altura de cm para metros: altura / 100.0
    imc = peso / ((altura / 100.0) * (altura / 100.0));

    // Impressão dos dados
    printf("\nNome: %s %s\n", nome, sobrenome);
    printf("Paciente do sexo %c, %d anos de idade\n", sexo, idade);
    printf("Altura: %.0f cm, Peso: %.f Kg\n", altura, peso);
    printf("IMC: %.2f\n", imc);

    return 0;
}
