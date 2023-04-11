/******************************************************************************

                01 - Lista de Exercícios - Entrada e Saída
                
10ª Faça um programa que receba o salário de um funcionário, calcule e imprima o 
valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do 
salário.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float salario, imposto;
    
    printf("Informe o salário: R$");
    scanf("%f", &salario);
    
    imposto = salario * 0.05;
    
    printf("O imposto é de R$%g.\n", imposto);
    
    return 0;
}

