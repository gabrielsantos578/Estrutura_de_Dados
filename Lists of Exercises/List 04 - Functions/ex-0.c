/******************************************************************************

                  04 - Lista de Exercícios - Funções
                
0ª Crie uma função que receba um valor e diga se é par ou ímpar.

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>

void avaliaNumero(int n);

int main() {
    
    int n;
        
    printf("Digite um número: ");
    scanf("%i", &n);
    avaliaNumero(n);
    
    return 0;
}

void avaliaNumero(int n) {
    
    if (n%2==0) {
        printf("Número Par.\n");
    } else {
        printf("Número Ímpar.\n");
    }
    
};
