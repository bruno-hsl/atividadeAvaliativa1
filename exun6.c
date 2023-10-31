#include <stdio.h>

int main() {
    float x, y;
    printf("Digite a coordenada do ponto (x): ");
    scanf("%f", &x);

    printf("Digite a coordenada do ponto (y): ");
    scanf("%f", &y);

    if(x < 9 && x > - 9 && y < 9 && y > -9){

    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    } else if (x > 0 && y > 0) {
        printf("Quadrante 1\n");
    } else if (x < 0 && y > 0) {
        printf("Quadrante 2\n");
    } else if (x < 0 && y < 0) {
        printf("Quadrante 3\n");
    } else {
        printf("Quadrante 4\n");
    }
    }else{
        printf("numero com mais de 1 digito");
    }

    return 0;
}
