#include <stdio.h>


int main () { 
    int valor1;

    scanf("%i", &valor1);

    valor1 -= 2024;
    valor1 *= -1;

    if (valor1 < 18) {
        printf("Ele nao pode votar");
    }
    else
        printf("Ele pode votar");
    
    

    return 0;
};