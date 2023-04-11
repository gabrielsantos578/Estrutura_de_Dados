/******************************************************************************

                01 - Lista de Exercícios - Entrada e Saída
                
8ª Faça um programa que calcule e imprima a área de um trapézio.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float basem, baseM, lado, altura, base, area;
    
    printf("Informe o comprimento do lado do trapézio: ");
    scanf("%f", &lado);
    printf("Informe o comprimento da base menor do trapézio: ");
    scanf("%f", &basem);
    printf("Informe o comprimento da base maior do trapézio: ");
    scanf("%f", &baseM);
    
    base = (baseM - basem) / 2;
    altura = sqrt((lado*lado) + (base * base));
    area = ((basem + baseM) * altura) / 2;
    
    printf("A área do trapézio é %gm².\n", area);
    
    return 0;
}
