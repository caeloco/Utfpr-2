#include <stdio.h>


int main () { 
    int ano;
    
    scanf("%d", &ano);

    if (ano % 100 != 0 && ano % 4 == 0) {
        printf("Esse ano eh bissexto");
    }

    else if (ano % 100 == 0 && ano % 400 == 0) {
        printf("Esse ano eh bissexto");
    }

    else { 
        printf("Esse ano nao eh bissexto");
    }

return 0;
}