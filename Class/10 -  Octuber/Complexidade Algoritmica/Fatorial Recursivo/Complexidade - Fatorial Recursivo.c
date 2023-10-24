#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define TAM 20

long long fatorialRecursivo(long long i)
{

    if (i > 1)
        return i * fatorialRecursivo(i - 1);

    else
        return 1;
}

int main()
{
    clock_t inicio = clock();

    long long number = fatorialRecursivo(TAM);

    clock_t fim = clock();

    double tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("--------------------------------------------");
    printf("\n\nClock inicial: %lu\n", inicio);
    printf("Clock final: %lu\n", fim);
    printf("Tempo decorrido: %.6f segundos\n", tempo_decorrido);
    printf("Numero: %lld\n", number);
    printf("--------------------------------------------");

    return 0;
}

