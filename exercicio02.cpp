#include <stdio.h>


int main () { 
    int valor1, valor2;

    scanf("%i %i", &valor1, &valor2);

    if (valor1 > valor2) {
        printf("%i", valor1);
    }
    else if (valor1 < valor2) {
        printf("%i", valor2);
    }
    else 
    printf("os valores sao iguais");

    return 0;
};