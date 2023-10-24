// Declaração das Bibliotecas;
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 100000 // Define o tamanho do vetor;

void fSelect_Sort(long long *pVetor); // Declara a função select sort;

int main()
{
    long long vVetor[TAM]; // Declara o vetor
    long long vAux;

    srand ( time(NULL) );
    for (vAux=0; vAux < TAM; vAux++)
    {
        vVetor[vAux] = (long long) rand() % TAM; // Preenche o vetor aleatóriamente;
    }

    clock_t inicio = clock();

    fSelect_Sort(vVetor); // Chama a função de Ordenação;

    clock_t fim = clock();

    double tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("--------------------------------------------");
    printf("\n\nClock inicial: %lu\n", inicio);
    printf("Clock final: %lu\n", fim);
    printf("Tempo decorrido: %.6f segundos\n", tempo_decorrido);
    printf("--------------------------------------------");

    return 0;
}

void fSelect_Sort(long long *pVetor)
{
    long long vMenor;
    long long vAux;
    long long vTemp;
    long long vTroca;

    for(vAux=0; vAux < TAM-1; vAux++) // Percorre todo o vetor até TAM-1, pois a ultima posição não precisa testar pois ja estara ordenada;
    {
        vMenor = vAux; // Menor valor recebe a posição que está passando;

        for (vTemp=vAux+1; vTemp < TAM; vTemp++) // Percorre o vetor da posição vAux+1 até o final;
        {
            if (pVetor[vTemp] < pVetor[vMenor]) // Testa se a posição que está passando é menor que o menor valor;
            {
                vMenor = vTemp; // vMenor recebe a posição do menor valor;
            }
        }

        if (vMenor != vAux) // Se a posição for diferente da que está passando, ocorre a troca;
        {
            vTroca         = pVetor[vAux];
            pVetor[vAux]   = pVetor[vMenor];
            pVetor[vMenor] = vTroca;
        }
    }
}