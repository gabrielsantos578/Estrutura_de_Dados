/******************************************************************************

                01 - Lista de Exercícios - Entrada e Saída
                
3ª Faça um programa que receba dois números, calcule e imprima um elevado ao 
outro (x=pow(base,exp), precisa da biblioteca math.h).

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, result;
    
    printf("Informe um número: ");
    scanf("%f", &num1);
    printf("Informe um outro número: ");
    scanf("%f", &num2);
    
    result = pow(num1, num2);
    
    printf("O número %g elevado a %g é igual a %g\n", num1, num2, result);
    
    return 0;
}
