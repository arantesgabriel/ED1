// Lista de Exercícios 2
// Exercício 5
// Gabriel Pimentel Arantes -

#include <stdio.h>

void preencheVetorUm(int *vetor1) {

    int x;

    printf("Digite o valor inicial: ");
    scanf("%d", &x);

    for (int i = 0; i <= 50; ++i) {
        vetor1[i] = x * i;
    }

}

void preencheVetorDois(int *vetor2, int *vetor1) {

    for (int i = 0; i <= 50; ++i) {
        vetor2[i] = vetor1[50 - i];
    }

}

int main() {

    int vetor1[50], vetor2[50];

    preencheVetorUm(vetor1);

    printf("\nVetor 1:\n");
    for (int i = 0; i <= 50; ++i) {
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor 2:\n");
    preencheVetorDois(vetor2, vetor1);

    for (int i = 0; i <= 50; ++i) {
        printf("%d ", vetor2[i]);
    }

    return 0;
}
