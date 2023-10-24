// Declaração das Bibliotecas;
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 100000

long long recursive_binary_search(long long vector[TAM], long long begin, long long end, long long item, long long quantOperacao)
{
    long long i = (begin + end) / 2;

    if (begin > end)
    {
        return -1;
    }

    if (vector[i] == item)
    {
        return quantOperacao;
    }

    if (vector[i] < item)
    {
        return recursive_binary_search(vector, i + 1, end, item, quantOperacao + 1);
    }
    else
    { // vector[i] > item
        return recursive_binary_search(vector, begin, i - 1, item, quantOperacao + 1);
    }
}

int main()
{
    long long vector[TAM];
    long long i;

    for (i = 0; i < TAM; i++)
        vector[i] = i + 1;

    srand((unsigned)time(NULL));
    i = (int)0 + (rand() % (TAM - 1));
    long long item = vector[i];

    clock_t inicio = clock();

    long long quantOperacao = recursive_binary_search(vector, 0, TAM - 1, item, 0);

    clock_t fim = clock();

    double tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("--------------------------------------------");
    printf("\n\nClock inicial: %lu\n", inicio);
    printf("Clock final: %lu\n", fim);
    printf("Tempo decorrido: %.6f segundos\n", tempo_decorrido);
    printf("Quantidade de operacoes: %lld\n\n", quantOperacao);
    printf("--------------------------------------------");

    return 0;
}