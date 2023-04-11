/******************************************************************************

                03 - Lista de Exercícios - Laço de Repetição
                
10ª Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos 
deles estão no intervalo [10,20] e quantos deles estão fora do intervalo, 
escrevendo estas informações.

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>

int main() {
    
    int i, num, dadoA=0, dadoB=0;
    
    for (i=1;i<11;i++) {
        
        printf("Digite um número: ");
        scanf("%i", &num);
        
        if(num > 9 && num < 21) {
            dadoA++;
        } else {
            dadoB++;
        }
        
    };
    
    printf("\n");
    printf("Foram informados %i números dentro do intervalor [10,20].\n", dadoA);
    printf("Foram informados %i números fora do intervalor [10,20].\n", dadoB);
    
    return 0;
}
