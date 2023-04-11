/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/*void troca(int *n1, int *n2);

int main()
{
    
    int num1=10, num2=20;
    
    printf("num1 = %d - num2: %d\n", num1, num2);
    troca(&num1, &num2);
    printf("num1 = %d - num2: %d\n", num1, num2);
    
}

void troca(int *n1, int *n2) {
    
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
    
}*/

void preencher(float *altura, float *base);
void calcularArea(float altura, float base, float *area);

int main()
{
    
    float altura=0, base=0, area=0;
    printf("Digite a altura e a base do triângulo: ");
    preencher(&altura, &base);
    calcularArea(altura, base, &area);
    printf("Área do Triângulo: %gm²\n", area);
    
}

void preencher(float *altura, float *base) {
    
    scanf("%f %f", altura, base);
    
};
    
void calcularArea(float altura, float base, float *area) {
    
    *area = (altura * base) / 2;
    
};
