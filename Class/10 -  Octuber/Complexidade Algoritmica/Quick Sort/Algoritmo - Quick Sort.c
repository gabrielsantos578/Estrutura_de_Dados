#include <stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h>   // time
#define TAM 100000

// função que realiza a troca entre dois elementos
long long troca(long long vet[], long long i, long long j)
{
    long long aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

// particiona e retorna o índice do pivô
long long particiona(long long vet[], long long inicio, long long fim)
{
    long long pivo, pivo_indice, i;

    pivo = vet[fim]; // o pivô é sempre o último elemento
    pivo_indice = inicio;

    for (i = inicio; i < fim; i++)
    {
        // verifica se o elemento é <= ao pivô
        if (vet[i] <= pivo)
        {
            // realiza a troca
            troca(vet, i, pivo_indice);
            // incrementa o pivo_indice
            pivo_indice++;
        }
    }

    // troca o pivô
    troca(vet, pivo_indice, fim);

    // retorna o índice do pivô
    return pivo_indice;
}

// escolhe um pivô aleatório para evitar o pior caso do quicksort
long long particiona_random(long long vet[], long long inicio, long long fim)
{
    // seleciona um número entre fim (inclusive) e inicio (inclusive)
    long long pivo_indice = (rand() % (fim - inicio + 1)) + inicio;

    // faz a troca para colocar o pivô no fim
    troca(vet, pivo_indice, fim);
    // chama a particiona
    return particiona(vet, inicio, fim);
}

long long quick_sort(long long vet[], long long inicio, long long fim)
{
    if (inicio < fim)
    {
        // função particionar retorna o índice do pivô
        long long pivo_indice = particiona_random(vet, inicio, fim);

        // chamadas recursivas quick_sort
        quick_sort(vet, inicio, pivo_indice - 1);
        quick_sort(vet, pivo_indice + 1, fim);
    }
}

int main()
{
    // vetor que será ordenado
    long long vet[TAM];
    long long i;

    for (i = 0; i < TAM; i++)
    {
        vet[i] = TAM - i;
    }

    // inicializa random seed
    srand(time(NULL));

    clock_t inicio = clock();

    // chamada do quicksort
    quick_sort(vet, 0, TAM - 1);

    clock_t fim = clock();

    double tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("--------------------------------------------");
    printf("\n\nClock inicial: %lu\n", inicio);
    printf("Clock final: %lu\n", fim);
    printf("Tempo decorrido: %.6f segundos\n", tempo_decorrido);
    printf("--------------------------------------------");

    return 0;
}