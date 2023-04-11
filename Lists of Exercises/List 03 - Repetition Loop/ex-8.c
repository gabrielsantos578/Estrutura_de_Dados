/******************************************************************************

                03 - Lista de Exercícios - Laço de Repetição
                
8ª Escrever um algoritmo que calcule e mostre a média aritmética dos números 
lidos entre 13 e 73.  

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>

int main() {
    
    int i=0, num, dado=0;
    
    while (1) {
        
        printf("Caso deseje encerrar o programa, digite -1.\n");
        printf("Caso não, digite um número: ");
        scanf("%i", &num);
        
        if(num<0) {
            
            break;
            
        } else {
            
            if(num > 12 && num < 74) {
                
                dado += num;
                i++;
                
            }
            
        }
        
    };
    
    
    printf("\n");
    printf("Média Aritmética: %i.\n", dado/i);
    printf("\n");
    printf("Programa Encerrado.");
    
    return 0;
}
