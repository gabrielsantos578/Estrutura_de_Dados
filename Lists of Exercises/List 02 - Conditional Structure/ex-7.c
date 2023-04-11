/******************************************************************************

                02 - Lista de Exercícios - Estrutura Condicional
                
7ª  Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é 
um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. 
A seguir: 

a) Se i=1 escrever os três valores a, b, c em ordem crescente. 
b) Se i=2 escrever os três valores a, b, c em ordem decrescente. 
c) Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c 
fique dentre os dois.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, val1, val2, val3;
    int i;
    
    printf("Informe um número: ");
    scanf("%f", &a);
    val1 = a;
    
    printf("Informe outro número: ");
    scanf("%f", &b);
    
    if(b >= a) {
        
        val1 = b;
        val2 = a;
        
    } else {
        
        val2 = b;
        
    }
    
    printf("Informe outro número: ");
    scanf("%f", &c);
    
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
    
    printf("Como deseja que sejam implimidos: \n");
    printf("[1] Ordem crescente.\n");
    printf("[2] Ordem decrescente.\n");
    printf("[3] Maior entre os dois.\n");
    
    printf("\n");
    
    printf("Digite a opção desejada: ");
    scanf("%i", &i);
    
    if(i == 1) {
                
        printf("Ordem crescente: %g, %g, %g.\n", val3, val2, val1);
        
    } else if(i == 2) {
    
        printf("Ordem decrescente: %g, %g, %g.\n", val1, val2, val3);
        
    } else if(i == 3) {
    
        printf("Maior entre: %g, %g, %g.\n", val3, val1, val2);
        
    } else {
        
        printf("A opção informada não existe.\n");
        
    }
    
    return 0;
}

