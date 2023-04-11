/******************************************************************************

                03 - Lista de Exercícios - Laço de Repetição
                
3ª  (DO WHILE) Escrever um algoritmo que leia uma quantidade desconhecida de 
números e conte quantos deles estão nos seguintes intervalos: [0,25], [26,50], 
[51,75] e [76,100]. A entrada de dados deve terminar quando for lido um número 
negativo.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    
    int num=1, inter1=0, inter2=0, inter3=0, inter4=0;
    
    
    do {
        
        printf("Informe um número: ");
        scanf("%d", &num);
        
        if (num < 0) {
            
            printf("Programa encerrado.\n");
            
        } else if (num < 26) {
            
            inter1+=1;
            
        } else if (num < 51) {
            
            inter2+=1;
            
        } else if (num < 76) {
            
            inter3+=1;
            
        } else if (num < 101) {
            
            inter4+=1;
            
        }
        
    } while(num > -1);
    
    printf("\n");
    printf("%i números no intervalo [0, 25].\n", inter1);
    printf("%i números no intervalo [26, 50].\n", inter2);
    printf("%i números no intervalo [51, 75].\n", inter3);
    printf("%i números no intervalo [76, 100].\n", inter4);
    
    return 0;
}
