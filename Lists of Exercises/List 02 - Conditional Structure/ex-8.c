/******************************************************************************

                02 - Lista de Exercícios - Estrutura Condicional
                
8ª  Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) 
e mostre-os em ordem decrescente.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, val1, val2, val3;
    
    printf("Não informe números negativos, caso o faça será considerado 0.\n");
    printf("Informe um número positivo: ");
    scanf("%i", &a);
    
    if(a < 0) {
        a=0;
    }
    
    val1 = a;
    
    printf("Informe outro número positivo: ");
    scanf("%i", &b);
    
    if(b < 0) {
        b=0;
    }
    
    if(b >= a) {
        
        val1 = b;
        val2 = a;
        
    } else {
        
        val2 = b;
        
    }
    
    printf("Informe outro número positivo: ");
    scanf("%i", &c);
    
    if(c < 0) {
        c=0;
    }
    
    if(c >= a && c >= b) {
         
        if (a >= b) {
             
            val1 = c;
            val2 = a;
            val3 = b;
         
        } else {
             
            val1 = c;
            val2 = b;
            val3 = a;
             
        }
         
    } else {
        
        if (c >= a && c <= b) {
            
            val2 = c;
            val3 = a;
            
        } else if (c <= a && c >= b) {
            
            val2 = c;
            val3 = b;
            
        } else {
            
            val3 = c;
            
        }
        
    }
    
    printf("\n");
    printf("Ordem decrescente: %i, %i, %i.\n", val1, val2, val3);
    
    return 0;
}

