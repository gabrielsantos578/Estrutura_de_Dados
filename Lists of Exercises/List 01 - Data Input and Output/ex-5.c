/******************************************************************************

                01 - Lista de Exercícios - Entrada e Saída
                
5ª Faça um programa que receba o valor do salário de um funcionário e o valor do 
salário mínimo. Calcule e imprima quantos salários mínimos ganha esse funcionário.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float salario, salarioMinimo, percentualSalario;
    
    printf("Informe o salário: R$");
    scanf("%f", &salario);
    printf("Informe o salário mínimo: R$");
    scanf("%f", &salarioMinimo);
    
    percentualSalario = salario / salarioMinimo;
    
    printf("O percentual salarial é %g salários mínimos.\n", percentualSalario);
    
    return 0;
}
