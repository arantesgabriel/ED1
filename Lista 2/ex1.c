// Lista de Exercícios 2
// Exercício 1
// Gabriel Pimentel Arantes -

#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d eh par", numero);
    } else printf("O numero %d eh impar", numero);

    return 0;
}
