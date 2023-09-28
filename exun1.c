#include <stdio.h>
#include <math.h>

int main(){
    int x = 5, f;

    f = (5 * x + 3) / (int)sqrt(x * x) - 16;

    printf("%d", f);

    return 0;
}

