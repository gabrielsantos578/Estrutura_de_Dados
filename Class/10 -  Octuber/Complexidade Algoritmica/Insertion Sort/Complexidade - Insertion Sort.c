#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100000 // Declara o tamanho do vetor;

long long fInsertion_Sort(int *pVetor);

int main()
{
    int vVetor[TAM];
    int vAux;
    long long quantOperacao;

    srand(time(NULL));
    for (vAux=0; vAux < TAM; vAux++)
    {
        vVetor[vAux] = rand() % TAM; // Preenche o vetor com valores aleatórios de 10 até 99;
    }

    clock_t inicio = clock();

    quantOperacao = fInsertion_Sort(vVetor); // Chama a função de Ordenação;

    clock_t fim = clock();

    double tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("--------------------------------------------");
    printf("\n\nClock inicial: %lu\n", inicio);
    printf("Clock final: %lu\n", fim);
    printf("Tempo decorrido: %.6f segundos\n", tempo_decorrido);
    printf("Quantidade de operacoes: %lld\n\n", quantOperacao);
    printf("--------------------------------------------");
}

long long fInsertion_Sort(int *pVetor)
{
    int vAux;
    int vTemp;
    int vTroca;
    long long quantOperacao = 0;

    for (vAux=1; vAux < TAM; vAux++) // vAux começa na posição 1 do vetor e vai até a ultima posição;
    {
        vTemp = vAux; // vTemp recebe a posição que está passando no "for";

        while (pVetor[vTemp] < pVetor[vTemp-1]) // Enquanto o valor que está passando na posição "vTemp" for menor que a posição "vTemp" menos 1, ocorre a troca;
        { // Ocorre a troca;
            vTroca          = pVetor[vTemp];
            pVetor[vTemp]   = pVetor[vTemp-1];
            pVetor[vTemp-1] = vTroca;
            vTemp--; // vTemp decrementa 1;

            quantOperacao += 1;

            if (vTemp == 0) // Quando "vTemp" chegar na posição 0, primeira posição do vetor, o laço while para;
                break;
        }

    }

    return quantOperacao;
}