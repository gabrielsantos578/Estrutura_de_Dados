/******************************************************************************

                02 - Lista de Exercícios - Estrutura Condicional
                
9ª  Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e 
dias e mostre-a expressa apenas em dias.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int idade, ano, mes, dia;
    
    printf("Informe sua idade em anos, meses e dias: ");
    scanf("%i %i %i", &ano, &mes, &dia);
    
    idade = (ano * 365) + (mes * 30) + dia;
    
    printf("Idade em dias: %i.\n", idade);
    
    return 0;
}
