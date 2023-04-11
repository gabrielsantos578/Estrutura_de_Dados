/******************************************************************************

            05 - Lista de Exercícios - Vetores e Matrizes
  
 2ª Crie um programa que preencha 2 vetores de 5 posições e mostre os valores 
 intercalados;

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define slot 5

int main()
{
    
    int vetorA[slot], vetorB[slot];
    srand(time(NULL));
    
    
    printf("\n---------------------- Vetores ---------------------\n\n");
    
    for (int i=0; i < slot; i++) {
     
        vetorA[i] = (rand()%100+1);
        printf("Vetor A[%d]: %2d\n", i, vetorA[i]);
        vetorB[i] = (rand()%100+1);
        printf("Vetor B[%d]: %2d\n", i, vetorB[i]);
      
    }
    
    
    return 0;
    
}
