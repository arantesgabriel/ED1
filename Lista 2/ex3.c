// Lista de Exercícios 2
// Exercício 3
// Gabriel Pimentel Arantes -

#include <stdio.h>

int main() {

    int valor, contador = 1;

    printf("Digite um inteiro: ");
    scanf("%d", &valor);

    for (int i = 0; i < 10; ++i) {
        printf("\n%d x %d = %d\n", valor, contador, valor * contador);
        contador++;
    }

    return 0;
}
