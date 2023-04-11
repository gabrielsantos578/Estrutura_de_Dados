/******************************************************************************

                03 - Lista de Exercícios - Laço de Repetição
                
2ª  (WHILE) Escreva um algoritmo que calcule a média dos números digitados pelo 
usuário, se eles forem pares. Termine a leitura se o usuário digitar zero (0).

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    
    int num=1, media=0, cond=0;
    
    
    while(num != 0) {
        
        printf("Informe um número: ");
        scanf("%d", &num);
        
        if (num == 0) {
            
            printf("Programa encerrado.\n");
            printf("\n");
            printf("Média dos números (pares) informados é %i.\n", media);
            break;
            
        } else {
            
            cond = num % 2;
            
            if(cond == 0) {
                media = (media + num) / 2; 
            }
            
        };
        
    }
    
    return 0;
}
