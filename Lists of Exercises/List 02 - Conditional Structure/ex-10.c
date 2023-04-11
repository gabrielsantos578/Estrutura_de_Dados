/******************************************************************************

                02 - Lista de Exercícios - Estrutura Condicional
                
10ª  Faça um algoritmo que leia a idade de uma pessoa expressa em dias e 
mostre-a expressa em anos, meses e dias.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int idade, ano, mes, dia;
    
    printf("Informe sua idade dias: ");
    scanf("%d", &idade);
    
    ano = idade / 365;
    idade = idade % 365;
    mes = idade / 30;
    idade = idade % 30;
    dia = idade;
    
    printf("Idade é de %i anos, %i meses e %i dias.\n", ano, mes, dia);
    
    return 0;
}
