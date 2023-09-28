#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    
    if (A + B > C && A + C > B && B + C > A) {
        if (A == B && B == C) {
            printf("É um triângulo equilátero.\n");
        } else if (A == B || A == C || B == C) {
            printf("É um triângulo isósceles.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("Esses valores não formam um triângulo.\n");
    }

    return 0;
}
