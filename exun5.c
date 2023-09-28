#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float distancia;

    printf("Digite a coordenada do ponto p1 (x1): ");
    scanf("%f", &x1);

    printf("Digite a coordenada do ponto p1 (y1): ");
    scanf("%f", &y1);

    printf("Digite a coordenada do ponto p2 (x2): ");
    scanf("%f", &x2);

    printf("Digite a coordenada do ponto p2 (y2): ");
    scanf("%f", &y2);


    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distância entre os pontos é: %.4f\n", distancia);

    return 0;
}
