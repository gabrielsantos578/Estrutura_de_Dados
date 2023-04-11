/******************************************************************************

                  04 - Lista de Exercícios - Funções
                
5ª Crie uma função em linguagem C que receba 2 números e retorne o menor valor.

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>

float avaliaNumeros(int n1, int n2);

int main() {
    
    float a, b;
        
    printf("Digite dois números: ");
    scanf("%f %f", &a, &b);
    
    if (avaliaNumeros(a, b) != 0) {
        printf("Maior: %g\n", avaliaNumeros(a, b));
    } else {
        printf("Ambos são iguais.\n");
    }
    
    return 0;
}

float avaliaNumeros(int n1, int n2) {
    
    if (n1 > n2) {
        return n2;
    } else if (n1 < n2) {
        return n1;
    } else {
        return 0;
    }
    
};

