#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
//100000
int main();

int main()
{
    int troca;
    long long i, aux, N = 100000, vetor[N];

    setlocale(LC_ALL, "Portuguese");
    for (i = 0; i < N; i++)
    {
        vetor[i] = (long long) rand() % N;
    }

    clock_t inicio = clock();

    troca = 1;
    long long quantOperacao = 0;
    while (troca == 1)
    {
        troca = 0;
        for (i = 0; i <= N; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                troca = 1;
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }

            quantOperacao += 1;
        }
    }

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