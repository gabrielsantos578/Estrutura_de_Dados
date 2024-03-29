#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000

void mergesort(int *v, int n);
void sort(int *v, int *c, int i, int f);
void merge(int *v, int *c, int i, int m, int f);

int main(void)
{
    int i;
    int v[N];

    for (i = 0; i < N; i++)
    {
        v[i] = rand() % N; // Preenche o vetor com valores aleatórios de 10 até 99;
    }

    clock_t inicio = clock();

    mergesort(v, N);

    clock_t fim = clock();

    double tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("--------------------------------------------");
    printf("\n\nClock inicial: %lu\n", inicio);
    printf("Clock final: %lu\n", fim);
    printf("Tempo decorrido: %.6f segundos\n", tempo_decorrido);
    printf("--------------------------------------------");

    return 0;
}

/*
  Dado um vetor de inteiros v e um inteiro n >= 0, ordena o vetor v[0..n-1] em ordem crescente.
*/
void mergesort(int *v, int n)
{
    int *c = malloc(sizeof(int) * n);
    sort(v, c, 0, n - 1);
    free(c);
}

/*
  Dado um vetor de inteiros v e dois inteiros i e f, ordena o vetor v[i..f] em ordem crescente.
  O vetor c é utilizado internamente durante a ordenação.
*/
void sort(int *v, int *c, int i, int f)
{
    if (i >= f)
        return;

    int m = (i + f) / 2;

    sort(v, c, i, m);
    sort(v, c, m + 1, f);

    /* Se v[m] <= v[m + 1], então v[i..f] já está ordenado. */
    if (v[m] <= v[m + 1])
        return;

    merge(v, c, i, m, f);
}

/*
  Dado um vetor v e três inteiros i, m e f, sendo v[i..m] e v[m+1..f] vetores ordenados,
  coloca os elementos destes vetores, em ordem crescente, no vetor em v[i..f].
*/
void merge(int *v, int *c, int i, int m, int f)
{
    int z,
        iv = i, ic = m + 1;

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
    }

    while (iv <= m)
        v[z++] = c[iv++];

    while (ic <= f)
        v[z++] = c[ic++];
}