/******************************************************************************

                01 - Lista de Exercícios - Entrada e Saída
                
6ª Faça um programa que calcule e imprima a área de um quadrado.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float lado, area;
    
    printf("Informe o comprimento do lado do quadrado: ");
    scanf("%f", &lado);
    
    area = lado * lado;
    
    printf("A área do quadrado é %gm².\n", area);
    
    return 0;
}

