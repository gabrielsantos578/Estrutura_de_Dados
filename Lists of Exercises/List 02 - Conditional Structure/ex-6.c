/******************************************************************************

                02 - Lista de Exercícios - Estrutura Condicional
                
6ª  Um vendedor necessita de um algoritmo que calcule o preço total devido por 
um cliente. O algoritmo deve receber o código de um produto e a quantidade 
comprada e calcular o preço total, usando a tabela abaixo:

Código do Produto	Preço unitário
 1001			     5,32
 1324			     6,45
 6548		       	 2,37
 0987			     5,32
 7623			     6,45

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float valor;
    int codigo, quantidade;
    
    printf("Informe o código do produto: ");
    scanf("%i", &codigo);
    
    if(codigo == 1001) {
    
        printf("Informe a quantidade comprada: ");
        scanf("%i", &quantidade);
        
        valor = quantidade * 5.32;
        
        printf("Preço Total: R$%g.\n", valor);
        
    } else if(codigo == 1324) {
    
        printf("Informe a quantidade comprada: ");
        scanf("%i", &quantidade);
        
        valor = quantidade * 6.45;
        
        printf("Preço Total: R$%g.\n", valor);
        
    } else if(codigo == 6548) {
    
        printf("Informe a quantidade comprada: ");
        scanf("%i", &quantidade);
        
        valor = quantidade * 2.37;
        
        printf("Preço Total: R$%g.\n", valor);
        
    } else if(codigo == 987) {
    
        printf("Informe a quantidade comprada: ");
        scanf("%i", &quantidade);
        
        valor = quantidade * 5.32;
        
        printf("Preço Total: R$%g.\n", valor);
        
    } else if(codigo == 7623) {
    
        printf("Informe a quantidade comprada: ");
        scanf("%i", &quantidade);
        
        valor = quantidade * 6.45;
        
        printf("Preço Total: R$%g.\n", valor);
        
    } else {
        
        printf("O código informado não existe.\n");
        
    }
    
    return 0;
}
