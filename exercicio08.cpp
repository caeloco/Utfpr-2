#include <stdio.h>


int main () { 
    char sexo;
    float altura, peso;

    scanf("%c %f %f", &sexo, &altura, &peso);

    if (peso < 601 && altura < 2.81) { 
        if (sexo == 'f') {
            printf("O peso ideal da femea seria: %.2f", (512.1 * altura) - 454.7);
        }
        else
            printf("O peso ideal do macho seria: %.2f", (522.7 * altura) - 472);
        }
    
    

    return 0;
};