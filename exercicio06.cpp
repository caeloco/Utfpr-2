#include <stdio.h>


int main () { 
    int senha;

    scanf("%i", &senha);

    if (senha == 1234) {
        printf("Acesso permitido");
    }
    else
        printf("Acesso negado");
    
    

    return 0;
};