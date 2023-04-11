/******************************************************************************

                        27/03 - Atividade com Vetores

1º Crie um vetor de tamanho 5, preencha-o e sete seus valoes em um outro vetor 
invertendo a ordem dos elementos.

2º Crie dois vetores de tamanho 5, preencha-os e sete seus valoes em um outro 
vetor com o dobro de tamanho;

3º Crie dois vetores de tamanho 5, preencha-os e sete seus valoes em um outro 
vetor com o dobro de tamanho, sendo que você deve por o primeiro valor do vetor 
1, depois o primeiro valor do vetor 2, em seguida o segundo valor do vetor 1 ...

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define v 5

int main()
{
    int vetorA[v], vetorB[v], vetorC[(v*2)];
    srand(time(NULL));
    
    /*for (int i=0; i < v; i++) {
        vetorB[i] = 2 * (vetorA[i] = rand()%16);
        printf("VA(%d): %2d - VB(%d): %2d\n", i, vetorA[i], i, vetorB[i]);
    }
    
    for (int i=0; i < v; i++) {
        vetorB[i] = vetorA[i] * 2;
    }
    
    for (int i=0; i < v; i++) {
        printf("VA(%d): %2d - VB(%d): %2d\n", i, vetorA[i], i, vetorB[i]);
    }*/
    
    printf("Atividade 1\n");
    printf("\n");
    
    /*for (int a=0, b=(v-1); a < v && b > -1; a++, b--) {
        vetorA[a] = rand()%16;
        vetorB[b] = vetorA[a];
        printf("VA(%d): %2d - VB(%d): %2d\n", a, vetorA[a], b, vetorB[b]);
    }*/
    
    for (int i=0; i < v; i++) {
        vetorA[i] = rand()%16;
        vetorB[((v-1)-i)] = vetorA[i];
        printf("VA(%d): %2d - VB(%d): %2d\n", i, vetorA[i], ((v-1)-i), vetorB[((v-1)-i)]);
    }
    
    printf("\n\n");
    printf("Atividade 2\n");
    printf("\n");
    
    for (int i=0; i < (v*2); i++) {
        if (i<v) {
            vetorC[i] = vetorA[i];
            printf("VC(%d): %2d - VA(%d): %2d\n", i, vetorC[i], i, vetorA[i]);
        } else {
            vetorC[i] = vetorB[i-v];
            printf("VC(%d): %2d - VB(%d): %2d\n", i, vetorC[i], (i-v), vetorB[i-v]);
        }
    }
    
    /*for (int i=0; i < v; i++) {
        vetorC[i] = vetorA[i];
        printf("VC(%d): %2d - VA(%d): %2d\n", i, vetorC[i], i, vetorA[i]);
        vetorC[i+v] = vetorB[i];
        printf("VC(%d): %2d - VB(%d): %2d\n", i+v, vetorC[i+v], (i-v), vetorB[i-v]);
    }*/
    
    printf("\n\n");
    printf("Atividade 3\n");
    printf("\n");
    
    /*for (int i=0; i < v; i++) {
        vetorC[i*2] = vetorA[i];
        vetorC[(i*2)+1] = vetorB[i];
        printf("VC(%d): %2d - VA(%d): %2d\n", i*2, vetorC[i*2], i, vetorA[i]);
        printf("VC(%d): %2d - VB(%d): %2d\n", (i*2)+1, vetorC[(i*2)+1], i, vetorB[i]);
        //%2d alinha todos os números com a segunda casa.
    }*/
    
    for (int i=0; i < (2*v); i+=2) {
        vetorC[i] = vetorA[i/2];
        vetorC[i+1] = vetorB[i/2];
        printf("VC(%d): %2d - VA(%d): %2d\n", i, vetorC[i], i/2, vetorA[i/2]);
        printf("VC(%d): %2d - VB(%d): %2d\n", i+1, vetorC[i+1], i/2, vetorB[i/2]);
        //%2d alinha todos os números com a segunda casa.
    }

    return 0;
}



