// Lista de Exercícios 2
// Exercício 4
// Gabriel Pimentel Arantes -

#include <stdio.h>

int main() {

    int valor, numeros[5] = {4, 7, 2, 9, 15}, encontrei = 0;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    for (int i = 0; i < 5; ++i) {
        if (valor == numeros[i]) {
            encontrei = 1;
            printf("\nO valor %d foi encontrado na posicao %d do vetor.", valor, i);
        }
    }

    if (!encontrei) {
        printf("\nO valor %d nao nao foi encontrado no vetor.", valor);
    }

    return 0;
}
