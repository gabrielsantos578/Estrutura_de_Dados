/******************************************************************************

                01 - Lista de Exercícios - Entrada e Saída
                
7ª Faça um programa que calcule e imprima a área de um círculo.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float raio, area;
    
    printf("Informe o comprimento do raio: ");
    scanf("%f", &raio);
    
    area = 3.14 * (raio * raio);
    
    printf("A área do círculo é %gm².\n", area);
    
    return 0;
}