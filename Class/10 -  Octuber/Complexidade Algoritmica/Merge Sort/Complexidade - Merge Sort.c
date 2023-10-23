#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000

long long mergesort(int *v, int n);
long long sort(int *v, int *c, int i, int f);
long long merge(int *v, int *c, int i, int m, int f);

int main(void)
{
    int i;
    int v[N];
    long long quantOperacao;

    for (i = 0; i < N; i++)
    {
        v[i] = rand() % N; // Preenche o vetor com valores aleatórios de 10 até 99;
    }

    clock_t inicio = clock();

    quantOperacao = mergesort(v, N);

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

/*
  Dado um vetor de inteiros v e um inteiro n >= 0, ordena o vetor v[0..n-1] em ordem crescente.
*/
long long mergesort(int *v, int n)
{
    int *c = malloc(sizeof(int) * n);
    long long quantOperacao;
    quantOperacao = sort(v, c, 0, n - 1);
    free(c);

    return quantOperacao;
}

/*
  Dado um vetor de inteiros v e dois inteiros i e f, ordena o vetor v[i..f] em ordem crescente.
  O vetor c é utilizado internamente durante a ordenação.
*/
long long sort(int *v, int *c, int i, int f)
{
    if (i >= f)
        return;

    int m = (i + f) / 2;

    sort(v, c, i, m);
    sort(v, c, m + 1, f);

    /* Se v[m] <= v[m + 1], então v[i..f] já está ordenado. */
    if (v[m] <= v[m + 1])
        return;

    return merge(v, c, i, m, f);
}

/*
  Dado um vetor v e três inteiros i, m e f, sendo v[i..m] e v[m+1..f] vetores ordenados,
  coloca os elementos destes vetores, em ordem crescente, no vetor em v[i..f].
*/
long long merge(int *v, int *c, int i, int m, int f)
{
    int z,
        iv = i, ic = m + 1;
    long long quantOperacao;

    for (z = i; z <= f; z++)
        c[z] = v[z];

    z = i;

    while (iv <= m && ic <= f)
    {
        /* Invariante: v[i..z] possui os valores de v[iv..m] e v[ic..f] em ordem crescente. */

        if (c[iv] <= c[ic])
            v[z++] = c[iv++];
        else
            v[z++] = c[ic++];

        quantOperacao += 1;
    }

    while (iv <= m)
    {
        v[z++] = c[iv++];
        quantOperacao += 1;
    }
    while (ic <= f)
    {
        v[z++] = c[ic++];
        quantOperacao += 1;
    }

    return quantOperacao;
}