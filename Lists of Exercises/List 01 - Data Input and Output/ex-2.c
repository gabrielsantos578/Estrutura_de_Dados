/******************************************************************************

                01 - Lista de Exercícios - Entrada e Saída
                
2ª Faça um programa que receba um número real, calcule e imprima:

 . a parte inteira do número;
 
 . a parte fracionária do número;

 . arredondamento do número.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float num, numFra;
    short numInt, numArr;
    
    printf("Informe um número: ");
    scanf("%f", &num);
    
    numInt = num;
    numFra = num - numInt;
    numArr = round(num);
    
    printf("Parte inteira do número: %d\n", numInt);
    printf("Parte fracionário do número: %g\n", numFra);
    printf("Arredondamento do número: %d\n", numArr);
    
    return 0;
}
