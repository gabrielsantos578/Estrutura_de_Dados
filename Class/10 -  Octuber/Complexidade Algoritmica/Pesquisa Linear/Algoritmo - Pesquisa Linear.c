// Declaração das Bibliotecas;
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 100000 // Define o tamanho do vetor;

int main()
{
    long long vetor[TAM];
    long long vAux;

    srand(time(NULL));
    for (vAux = 0; vAux < TAM; vAux++)
    {
        vetor[vAux] = (long long)TAM - vAux; // Preenche o vetor aleatóriamente;
    }
    srand((unsigned)time(NULL));
    long long i = 0 + (rand() % (TAM - 1));
    long long item = vetor[i];

    clock_t inicio = clock();

    for (vAux = 0; vAux < TAM; vAux++)
    {
        if (vetor[vAux] == item){
            break;
        }
    }

    clock_t fim = clock();

    double tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("--------------------------------------------");
    printf("\n\nClock inicial: %lu\n", inicio);
    printf("Clock final: %lu\n", fim);
    printf("Tempo decorrido: %.6f segundos\n", tempo_decorrido);
    printf("--------------------------------------------");

    return 0;
}