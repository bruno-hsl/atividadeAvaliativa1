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
            printf("E um triangulo equilatero.\n");
        } else if (A == B || A == C || B == C) {
            printf("E um triangulo isasceles.\n");
        } else {
            printf("E um triangulo escaleno.\n");
        }
    } else {
        printf("Esses valores não formam um triangulo.\n");
    }

    return 0;
}
