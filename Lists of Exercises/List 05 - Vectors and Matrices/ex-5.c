/******************************************************************************

            05 - Lista de Exercícios - Vetores e Matrizes
  
 5ª Crie um programa que crie um vetor de 10 posições e preencha com valores 
 inteiros. Crie um segundo vetor que será preenchido com os valores pares.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define slot 10

int main()
{
    
    int vet_A[slot], vet_B[slot], p;
    double n, m;
    srand(time(NULL));
    
    
    printf("\n---------------------- Vetores ---------------------\n\n");
    
    for (int i=0; i < slot; i++) {
     
        vet_A[i] = (rand()%100+1);
        
        printf("Vetor A[%d]: %2d\n", i, vet_A[i]);
      
    }
    
    printf("\n");
    
    for (int q=0; q < 10;) {
        
        m = (rand()%100+1);
        p = m / 2;
        n = m / 2;
        
        if (n - p == 0) {
            
            vet_B[q] = m;
            printf("Vetor B[%d]: %2d\n", q, vet_B[q]);
            q++;
            
        }
      
    }
    
    
    return 0;
    
}

