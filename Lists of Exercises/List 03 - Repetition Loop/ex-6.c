/******************************************************************************

                03 - Lista de Exercícios - Laço de Repetição
                
6ª (FOR) Escreva um algoritmo que gere o números de 1000 a 1999 e escreva aqueles 
que dividido por 11 dão resto igual a 5. 

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>

int main() {
    
    int num, cond;
    
    for (num=1000;num<2000;num++) {
        
        cond = num % 11;
        
        if (cond == 5) {
            
            printf("%i\n", num);
            printf("\n"); 

        }
        
    };
    
    return 0;
}


