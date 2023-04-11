/******************************************************************************

                  04 - Lista de Exercícios - Funções
                
2ª Crie uma função que receba três valores, 'a', 'b' e 'c', que são os 
coeficientes de uma equação do segundo grau e retorne o valor do delta, que é 
dado por 'b² - 4ac'

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>

void calculaDelta(int a, int b, int c);

int main() {
    
    int a, b, c;
        
    printf("Digite três números: ");
    scanf("%i %i %i", &a, &b, &c);
    calculaDelta(a, b, c);
    
    return 0;
}

void calculaDelta(int a, int b, int c) {
    
    float delta;
    
    delta = pow(b, 2) - (4 * a * c);
    
    printf("Delta: %g\n", delta);
    
};
