#include <stdio.h>


int main () { 
    int valor;

    scanf("%i", &valor);

    if (valor > 10) {
        printf("O valor %i eh maior que 10", valor);
    };
    return 0;
};