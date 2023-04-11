/******************************************************************************

            05 - Lista de Exercícios - Vetores e Matrizes
  
 4ª Crie um programa que tenha 2 vetores de 5 posições (vet_A, vet_B) e crie um 
 vetor resultante vet_C com 10 posições que receba vet_a nas primeiras 5 
 posições e o vetor vet_B nas últimas 5 posições.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define slot 5

int main()
{
    
    int vet_A[slot], vet_B[slot], vet_C[2*slot];
    srand(time(NULL));
    
    
    printf("\n---------------------- Vetores ---------------------\n\n");
    
    for (int i=0; i < slot; i++) {
     
        vet_A[i] = (rand()%100+1);
        vet_B[i] = (rand()%100+1);
        vet_C[i] = vet_A[i];
        vet_C[i+slot] = vet_B[i];
      
    }
    
    for (int i=0; i < 2*slot; i++) {
        
        if (i<slot) {
            
            printf("Vetor C[%d]: %2d = A[%d]\n", i, vet_C[i], i);
            
        } else {
            
            printf("Vetor C[%d]: %2d = B[%d]\n", i, vet_C[i], i-slot);
            
        }
      
    }
    
    
    return 0;
    
}

