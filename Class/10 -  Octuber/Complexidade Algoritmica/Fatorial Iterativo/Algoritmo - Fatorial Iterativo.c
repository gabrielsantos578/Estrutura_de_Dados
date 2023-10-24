#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define TAM 10

int main()
{
    long long number = 1, i;

    clock_t inicio = clock();

    for (i=2; i <= TAM; i++)
    {
        number *= i;
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