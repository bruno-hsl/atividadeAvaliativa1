#include <stdio.h>

int main(){
    float chico = 1.50, ze = 1.10;
    int anos = 0;

    while(ze <= chico){
        chico += 0.02;
        ze += 0.03;
        anos += 1;
    }

    printf("Ze demorou %d anos para supera Chico e ficou com: %f de altura", anos, ze);
    printf("\nAltura de Chico depois de %d anos: %f", anos, chico);
    return 0;
}