/******************************************************************************

                02 - Lista de Exercícios - Estrutura Condicional
                
3ª  Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias: 
 
 . infantil A =  5 -  7 anos

 . infantil B =  8 - 10 anos

 . juvenil  A = 11 - 13 anos

 . juvenil  B = 14 - 17 anos

 . adulto = maiores de 18 anos

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int idade;
    
    printf("Informe a idade (inteira): ");
    scanf("%d", &idade);
    
    if(idade < 5) {
        printf("Idade não classificada.\n");
        
    } else if(idade < 8) {
        printf("Infantil A =  5 -  7 anos.\n");
        
    } else if(idade < 11) {
        printf("Infantil B =  8 - 10 anos.\n");
        
    } else if(idade < 14) {
        printf("Juvenil  A = 11 - 13 anos.\n");
        
    } else if(idade < 18) {
        printf("Juvenil  B = 14 - 17 anos.\n");
        
    } else {
        printf("Adulto = maiores de 18 anos.\n");
        
    }
    
    return 0;
}
