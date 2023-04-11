/******************************************************************************

            05 - Lista de Exercícios - Vetores e Matrizes
  
 1ª Crie um programa que preencha um vetor de 5 posições e:

	- imprima a soma de todos os valores;
	- imprima apenas os valores pares;
	- imprima o maior e o menor valor do vetor;
	- imprima o dobro de todos os valores;
	- imprima a raiz quadrada dos valores ímpares;

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define slot 5

int main()
{
    
    int vetor[slot], n;
    double soma=0, maior, menor, par, impar;
    srand(time(NULL));
    
    
    printf("\n---------------------- Vetor ---------------------\n\n");
    
    for (int i=0; i < slot; i++) {
     
        vetor[i] = (rand()%100+1);
        printf("Matriz[%d]: %2d\n", i, vetor[i]);
      
    }
    
    
    printf("\n\n----------------------- Soma -----------------------\n\n");
    
    for (int i=0; i < slot; i++) {
     
        soma += vetor[i];
      
    }
    
    printf("Soma: %g\n", soma);
    
    
    printf("\n\n----------------------- Pares -----------------------\n\n");
    
    for (int i=0; i < slot; i++) {
     
        par = vetor[i];
        par /= 2;
        n = vetor[i] / 2;
            
        if (par - n == 0) {
            
            printf("Par[%d]: %2d\n", i, vetor[i]);
           
        }
      
    }
    
    
    printf("\n\n----------------------- Maior -----------------------\n\n");
    
    for (int i=0; i < slot; i++) {
     
        if (i==0) {
            maior = vetor[i];
        }
            
        if (maior < vetor[i]) {
            
            maior = vetor[i];
            
        }
      
    }
    
    printf("Maior: %g\n", maior);
    
    
    printf("\n\n----------------------- Menor -----------------------\n\n");
    
    for (int i=0; i < slot; i++) {
     
        if (i==0) {
            menor = vetor[i];
        }
            
        if (menor > vetor[i]) {
            
            menor = vetor[i];
            
        }
      
    }
    
    printf("Menor: %g\n", menor);
    
    
    printf("\n\n----------------------- Dobro -----------------------\n\n");
    
    for (int i=0; i < slot; i++) {
     
        printf("Dobro[%d]: %2d\n", i, (vetor[i])*2);
      
    }
    
    
    printf("\n\n---------------- Quadrado - Impares -----------------\n\n");
    
    for (int i=0; i < slot; i++) {
     
        impar = vetor[i];
        impar /= 2;
        n = vetor[i] / 2;
            
        if (impar - n > 0) {
            
            printf("Quadrado[%d]: %g\n", i, pow(vetor[i], 2));
            
        }
      
    }
    
    
    return 0;
    
}

