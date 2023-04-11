/******************************************************************************

                  04 - Lista de Exercícios - Funções
                
8ª Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio, 
um número de 1 até 6. Utilize as funções srand(time(NULL)) e rand();

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int dado();

int main() {
    
    srand(time(NULL));
    printf("Número Gerado: %i.\n", dado());
    
    return 0;
}

int dado(){
    
    int x;
    x = 1 + (rand() % 6);
    return x;
    
};
