/******************************************************************************

                  04 - Lista de Exercícios - Funções
                
1ª Crie uma função que receba um valor e informe se ele é positivo ou não.

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
    
    if (n > 0) {
        printf("Número Positivo.\n");
    } else if (n < 0) {
        printf("Número Negativo.\n");
    } else {
        printf("Número Neutro.\n");
    }
    
};
