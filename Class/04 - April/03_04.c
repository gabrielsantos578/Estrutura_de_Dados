/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define i 5


int preecherMatriz(int matriz[][i]);
int imprimirMatriz(int matriz[][i]);
int maiorValorMatriz(int matriz[][i], int *maior);
int menorValorMatriz(int matriz[][i], int *menor);
int menorValorMatriz(int matriz[][i], int *soma);

int main()
{
    
    /*int matriz[i][i], totalL[i] = {0,0,0,0}, totalC[i] = {0,0,0,0}, crescente[i][i], casa[2], vetor[i*i];
    double maior=0, menor=0, media=0, soma=0, n=200;
    int a=0, b=0, m;*/
    
    printf("\n---------------------- Matriz ---------------------\n\n");
    
    int matriz[i][i];
    preecherMatriz(matriz);
    imprimirMatriz(matriz);
    
    printf("\n\n---------------------- Maior ----------------------\n\n");
    
    int maior;
    maiorValorMatriz(matriz, &maior);
    printf("Maior: %d\n", maior);
    
    printf("\n\n---------------------- Menor ----------------------\n\n");
    
    int menor;
    menorValorMatriz(matriz, &menor);
    printf("Menor: %d\n", menor);
    
    printf("\n\n---------------------- Média ----------------------\n\n");
    
    double soma;
    menorValorMatriz(matriz, &soma);
    printf("Média: %g\n", soma/(i*i));

    /*printf("\n\n------------------- Total Linha --------------------\n\n");
    


    for (int l=0; l < i; l++) {
        totalL[l]=0;
        totalC[l]=0;
    }
    
    for (int l=0; l < i; l++) {
        
        for (int c=0; c < i; c++) {
            
            totalL[l] += matriz[l][c];
            
        } 
    } 
    
    for (int l=0; l < i; l++) {
        
        for (int c=0; c < i; c++) {
            
            totalC[l] += matriz[c][l];
            
        } 
    }
    
    for (int l=0; l < i; l++) {
        printf("Total Linha[%i]: %d\n", l, totalL[l]);
    }
    printf("\n\n------------------- Total Coluna -------------------\n\n");
    
    for (int l=0; l < i; l++) {
        printf("Total Coluna[%i]: %d\n", l, totalC[l]);
    }
    printf("\n\n----------------- Matriz Ordenada -------------------\n\n");
     
     
     
    int vet=0;
    for (int l=0; l < i; l++) {
        
        for (int c=0; c < i; c++) {
            
            vetor[vet] = matriz[l][c];
            vet++;
            
        }
        
    }
    
    for (int v=0; v < i*i; v++) {
            
        if (vetor[v] > vetor[v+1]) {
            
            int auxiliar = vetor[v];
            vetor[v] = vetor[v+1];
            vetor[v+1] = vetor[v];
            v = -1;
            
        }
        
    }
    
    for (int v=0; v < i*i; v++) {
        printf("%d\n", vetor[v]);
    }
     
     
      
    for (int r=0; r < (i*i); r++) {
        
        m = 1000;
        
        for (int l=0; l < i; l++) {
            
            for (int c=0; c < i; c++) {
                
                if (m >= matriz[l][c]) {
                    
                    m = matriz[l][c];
                    casa[0]=l;
                    casa[1]=c;
                    
                }
                
            }
            
        }
        
        crescente[a][b] = m;
        matriz[casa[0]][casa[1]] = 1000;
        printf("Matriz[%i][%i]: %3d\n", casa[0], casa[1], crescente[a][b]);
            
        if (b == 4) {
            a++;
            b=0;
        } else {
            b++;
        }
        
    }*/
    
    

    return 0;
}



int preecherMatriz(int matriz[][i]) {
    
    srand(time(NULL));
    
    for (int l=0; l < i; l++) {
        
        for (int c=0; c < i; c++) {
            
            matriz[l][c] = (rand()%1000+1);
            
        } 
    }
    
    return 0;
    
}


int imprimirMatriz(int matriz[][i]) {
    
    srand(time(NULL));
    
    for (int l=0; l < i; l++) {
        
        for (int c=0; c < i; c++) {
            
            printf("Matriz[%d][%d]: %3d\n", l, c, matriz[l][c]);
            
        } 
    }
    
    return 0;
    
}


int maiorValorMatriz(int matriz[][i], int *maior) {
    
    for (int l=0; l < i; l++) {
        
        for (int c=0; c < i; c++) {
            
            if (l == 0 && c ==0) {
                *maior = matriz[l][c];
            } 
            
            if (*maior < matriz[l][c]) {
                *maior = matriz[l][c];
            }
            
        } 
    }
    
    return 0;
    
}


int menorValorMatriz(int matriz[][i], int *menor) {
    
    for (int l=0; l < i; l++) {
        
        for (int c=0; c < i; c++) {
            
            if (l == 0 && c ==0) {
                *menor = matriz[l][c];
            } 
            
            if (*menor > matriz[l][c]) {
                *menor = matriz[l][c];
            }
            
        } 
    }
    
    return 0;
    
}


int menorValorMatriz(int matriz[][i], int *soma) {
    
    for (int l=0; l < i; l++) {
        
        for (int c=0; c < i; c++) {
            
            *soma += matriz[l][c];
            
        } 
    }
    
    return 0;
    
}