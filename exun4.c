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
        
        float maiorLado, lado1, lado2;

        if (A >= B && A >= C) {
            maiorLado = A;
            lado1 = B;
            lado2 = C;
        } else if (B >= A && B >= C) {
            maiorLado = B;
            lado1 = A;
            lado2 = C;
        } else {
            maiorLado = C;
            lado1 = A;
            lado2 = B;
        }

        if (maiorLado * maiorLado == lado1 * lado1 + lado2 * lado2) {
            printf("É um triangulo retangulo.\n");
        } else if (maiorLado * maiorLado > lado1 * lado1 + lado2 * lado2) {
            printf("É um triangulo obtusangulo.\n");
        } else {
            printf("É um triangulo acutangulo.\n");
        }
    } else {
        printf("Esses valores não formam um triangulo.\n");
    }

    return 0;
}
