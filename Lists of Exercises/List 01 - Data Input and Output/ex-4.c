/******************************************************************************

                01 - Lista de Exercícios - Entrada e Saída
                
4ª Faça um programa que receba um número inteiro, calcule e imprima:

 . a raiz quadrada desse número (x=sqrt (numero), precisa da biblioteca math.h);

 . esse número elevado ao quadrado.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float num, raiz, elevado;
    
    printf("Informe um número inteiro: ");
    scanf("%f", &num);
    
    raiz = sqrt(num);
    elevado = num * num;
    
    printf("Raiz Quadrada: %g\n", raiz);
    printf("Elevado ao Quadrado: %g\n", elevado);
    
    return 0;
}
