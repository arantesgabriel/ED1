// Lista de Exercícios 2
// Exercício 2
// Gabriel Pimentel Arantes -

#include <stdio.h>

void imprimeMenu() {
    printf("Selecione a operacao a ser realizada:\n");
    printf("1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n0. Sair\n");
}

float soma(int n1, int n2) {
    int resultado;
    resultado = n1 + n2;
    return resultado;
}

float subtracao(int n1, int n2) {
    int resultado;
    resultado = n1 - n2;
    return resultado;
}

float multiplicacao(int n1, int n2) {
    int resultado;
    resultado = n1 * n2;
    return resultado;
}

float divisao(int n1, int n2) {
    int resultado;
    resultado = n1 / n2;
    return resultado;
}

int main() {

    int opcao;
    float valor1, valor2, resultadoFinal;

    do {
        imprimeMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o primeiro valor:\n");
                scanf("%f", &valor1);
                printf("Digite o segundo valor:\n");
                scanf("%f", &valor2);

                resultadoFinal = soma(valor1, valor2);
                printf("A soma eh %.2f\n\n", resultadoFinal);
                break;

            case 2:
                printf("Digite o primeiro valor:\n");
                scanf("%f", &valor1);
                printf("Digite o segundo valor:\n");
                scanf("%f", &valor2);

                resultadoFinal = subtracao(valor1, valor2);
                printf("A subtracao eh %.2f\n\n", resultadoFinal);
                break;

            case 3:
                printf("Digite o primeiro valor:\n");
                scanf("%f", &valor1);
                printf("Digite o segundo valor:\n");
                scanf("%f", &valor2);

                resultadoFinal = multiplicacao(valor1, valor2);
                printf("A multiplicacao eh %.2f\n\n", resultadoFinal);
                break;

            case 4:
                printf("Digite o primeiro valor:\n");
                scanf("%f", &valor1);
                printf("Digite o segundo valor:\n");
                scanf("%f", &valor2);

                resultadoFinal = divisao(valor1, valor2);
                printf("A divisao eh %.2f\n\n", resultadoFinal);
                break;
        }

    } while (opcao != 0);

    return 0;
}
