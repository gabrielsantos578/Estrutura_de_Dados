/******************************************************************************

                01 - Lista de Exercícios - Entrada e Saída
                
1ª Faça um programa que receba o valor de um depósito e o valor da taxa de juros. 
Calcule e imprima o valor do rendimento e o valor total depois do rendimento.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float deposito, taxa, rendimento, totalRendimento;
    
    printf("Informe o valor do deposito: R$");
    scanf("%f", &deposito);
    printf("Informe o percentual da taxa: ");
    scanf("%f", &taxa);
    
    rendimento = deposito * (taxa / 100);
    totalRendimento = deposito - (deposito * (taxa / 100));
    
    printf("Valor Rendimento: R$%g\n", rendimento);
    printf("Valor Total: R$%g\n", totalRendimento);
    
    return 0;
}


