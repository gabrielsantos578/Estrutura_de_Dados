/******************************************************************************

Data: 13/03.
Exercício - Menu.

*******************************************************************************/

#include <stdio.h>
#include <locale.h> //para caracteres especiais

void areaTriangulo();
void maiorNumero();
void tabuada();
void encerrar();

int main()
{

    int opcao, i=0;

    printf("--------------- Bem-vindo. ---------------\n");
    printf("\n");

    while (1)
    {

        printf("[1] Área do Triândulo.\n");
        printf("[2] Maior número entre três valores.\n");
        printf("[3] Tabuada.\n");
        printf("[0] Encerrar programa.\n");
        printf("\n");
        printf("Digite o número da opção: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            areaTriangulo();

            printf("\n");
            printf("------------------------------------------\n");
            printf("\n");
        }
        else if (opcao == 2)
        {
            maiorNumero();

            printf("\n");
            printf("------------------------------------------\n");
            printf("\n");
        }
        else if (opcao == 3)
        {
            tabuada();

            printf("\n");
            printf("------------------------------------------\n");
            printf("\n");
        }
        else if (opcao == 0)
        {
            encerrar();
            break;
        }
        else
        {
            printf("\n");
            printf("A opção informada não existe.\n");
            printf("\n");
            printf("------------------------------------------\n");
            printf("\n");
            
            i++;
            
            if(i>=4) {
                break;
            }
        }
    }
};

void areaTriangulo()
{

    float base, altura;

    printf("\n");

    printf("Informe a base do triângulo: ");
    scanf("%f", &base);
    printf("Informe a base do triângulo: ");
    scanf("%f", &altura);

    printf("\n");
    printf("A área do triângulo é de %g m².\n", (base * altura) / 2);

};

void maiorNumero()
{

    int n1, n2, n3, maior;

    printf("\n");

    printf("Informe um número: ");
    scanf("%d", &n1);
    printf("Informe outro número: ");
    scanf("%d", &n2);
    printf("Informe outro número: ");
    scanf("%d", &n3);

    maior = n1;

    if (maior < n2)
    {
        maior = n2;
    }
    else if (maior < n3)
    {
        maior = n3;
    }

    printf("\n");
    printf("O maior número é %d.\n", maior);

};

void tabuada()
{

    int num, i;

    printf("\n");

    printf("Informe um número: ");
    scanf("%d", &num);

    printf("\n");
    printf("---------------- Tabuada -----------------");
    printf("\n");

    for (i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", num, i, (num * i));
    }

};

void encerrar()
{

    printf("\n");
    printf("Programa Encerrado.\n");
    printf("\n");
    printf("------------------------------------------\n");

};

