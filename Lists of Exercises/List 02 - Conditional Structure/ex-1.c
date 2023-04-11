/******************************************************************************

                02 - Lista de Exercícios - Estrutura Condicional
                
1ª Elaborar um algoritmo que lê 3 valores a,b,c e os escreve. A seguir, encontre 
o maior dos 3 valores e o escreva com a mensagem : "É o maior ".

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, num3;
    
    printf("Informe um número: ");
    scanf("%f", &num1);
    printf("Informe um outro número: ");
    scanf("%f", &num2);
    printf("Informe um outro número: ");
    scanf("%f", &num3);
    
    if(num1 > num2 && num1 > num3) {
        printf("É o maior %g (A).\n", num1);
        
    } else if (num2 > num3) {
        printf("É o maior %g (B).\n", num2);
        
    } else {
        printf("É o maior %g (C).\n", num3);
        
    }
    
    return 0;
}
