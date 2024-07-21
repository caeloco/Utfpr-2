#include <stdio.h>


int main () { 
    int valor1;

    scanf("%i", &valor1);

    if (valor1 > 0) {
        printf("O valor %i eh maior que 0", valor1);
    }
    else if (valor1 < 0) {
        printf("o valor %i eh menor que 0", valor1);
    }
    else 
    printf("O valor eh 0");

    return 0;
};