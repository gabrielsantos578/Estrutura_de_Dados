/******************************************************************************

            05 - Lista de Exercícios - Vetores e Matrizes
  
 3ª Crie um programa que tenha 3 vetores de 5 posições (vet_A, vet_B e vet_C). 
 O vetor vet_C é a soma dos vetores vet_A + vet_B. Mostre vet_C.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define slot 5

int main()
{
    
    int vet_A[slot], vet_B[slot], vet_C[slot];
    srand(time(NULL));
    
    
    printf("\n---------------------- Vetores ---------------------\n\n");
    
    for (int i=0; i < slot; i++) {
     
        vet_A[i] = (rand()%100+1);
        vet_B[i] = (rand()%100+1);
        vet_C[i] = vet_A[i] + vet_B[i];
        printf("Vetor C[%d]: %2d\n", i, vet_C[i]);
      
    }
    
    
    return 0;
    
}

