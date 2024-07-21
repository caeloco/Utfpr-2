#include <stdio.h>


int main () { 
    float quantidade;

    scanf("%f", &quantidade);

    if (quantidade < 12) {
        printf("Valor da compra: %.2f", quantidade * 1.10);
    }
    else
        printf("Valor da compra: %.2f", quantidade);
    
    

    return 0;
};