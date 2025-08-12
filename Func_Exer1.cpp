#include <stdio.h>

int conta_inteiros_entre(int a, int b) {
    int diff = (a > b) ? (a - b) : (b - a);
    return (diff > 1) ? diff - 1 : 0;
}

int main(void) {
    int A, B;
    printf("Digite dois numeros inteiros: ");
    if (scanf("%d %d", &A, &B) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }
    int qtd = conta_inteiros_entre(A, B);
    printf("Existem %d numeros inteiros entre %d e %d.\n", qtd, A, B);
    return 0;
}
