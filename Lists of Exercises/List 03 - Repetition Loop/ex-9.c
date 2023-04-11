/******************************************************************************

                03 - Lista de Exercícios - Laço de Repetição
                
9ª Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200. 

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>

int main() {
    
    int i, num;
    
    for (i=100;i<201;i++) {
        
        num = i % 2;
        
        if(num == 1) {
            
            printf("%i\n", i);
            printf("\n");
            
        } 
        
    };
    
    return 0;
}
