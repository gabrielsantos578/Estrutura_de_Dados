/******************************************************************************

                  04 - Lista de Exercícios - Funções
                
9ª Use a função da questão passado e lance o dado 1 milhão de vezes. Conte 
quantas vezes cada número saiu.
A probabilidade deu certo? Ou seja, a porcentagem dos números foi parecida?

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define g 1000000

int dado();

int main() {
    
    float sorteio[6] = {0, 0, 0, 0, 0, 0};
    
    srand(time(NULL));
    
    for (long int i = 0; i < g; i++) {
        
        int n = dado();
        
        if (n==1) {
            sorteio[0] = sorteio[0] + 1;
        } else if (n==2) {
            sorteio[1] = sorteio[1] + 1;
        } else if (n==3) {
            sorteio[2] = sorteio[2] + 1;
        } else if (n==4) {
            sorteio[3] = sorteio[3] + 1;
        } else if (n==5) {
            sorteio[4] = sorteio[4] + 1;
        } else {
            sorteio[5] = sorteio[5] + 1;
        }
        
    }

    printf("Número 1: %g\n", (sorteio[0]/g)*100);
    printf("Número 2: %g\n", (sorteio[1]/g)*100);
    printf("Número 3: %g\n", (sorteio[2]/g)*100);
    printf("Número 4: %g\n", (sorteio[3]/g)*100);
    printf("Número 5: %g\n", (sorteio[4]/g)*100);
    printf("Número 6: %g\n", (sorteio[5]/g)*100);
    
    return 0;
}

int dado(){
    
    int x;
    x = 1 + (rand() % 6);
    return x;
    
};
