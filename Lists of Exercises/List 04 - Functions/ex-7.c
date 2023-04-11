/******************************************************************************

                  04 - Lista de Exercícios - Funções
                
7ª Crie uma função em linguagem C que receba 3 números e retorne o maior valor, 
use a função da questão 4.

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>

float avaliaNumeros(int n1, int n2);

int main() {
    
    float a, b, c, maior;
        
    printf("Digite dois números: ");
    scanf("%f %f %f", &a, &b, &c);
    
    maior = avaliaNumeros(a, b);
    
    if (avaliaNumeros(a, b) != 0) {
        
        if (maior > c) {
            printf("Maior: %g\n", c);
        } else if (maior < c) {
            printf("Maior: %g\n", maior);
        } else {
            printf("Os dois menores são iguais (%g).\n", maior);
        }
        
    } else {
        
        if (maior > c) {
            printf("Maior: %g\n", c);
        } else if (maior < c) {
            printf("Maior: %g\n", maior);
        } else {
            printf("Ambos são iguais.\n");
        }
        
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
