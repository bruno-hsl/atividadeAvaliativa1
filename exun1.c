#include <stdio.h>
#include <math.h>

int main(){
    float x = 5, f;

printf("Valor de x: ");
scanf("%f", & x);

    f = ((5 * x) + 3) / (int)sqrt(x * x - 16);

    printf("%f", f);

    return 0;
}


