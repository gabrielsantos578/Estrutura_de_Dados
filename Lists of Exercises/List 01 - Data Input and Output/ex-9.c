/******************************************************************************

                01 - Lista de Exercícios - Entrada e Saída
                
9ª Faça um programa que calcule e imprima a área de um losango.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float diagonalm, diagonalM, area;
    
    printf("Informe o comprimento da diagonal menor do losango: ");
    scanf("%f", &diagonalm);
    printf("Informe o comprimento da diagonal maior do losango: ");
    scanf("%f", &diagonalM);
    
    area = (diagonalm * diagonalM) / 2;
    
    printf("A área do losango é %gm².\n", area);
    
    return 0;
}
