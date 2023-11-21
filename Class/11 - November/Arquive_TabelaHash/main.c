#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define repository "C:\\Users\\Aluno\\Downloads\\Estrutura_de_Dados\\Class\\11 - November\\Arquive_TabelaHash\\"
#define number 17

#include "struct.h"
#include "aditional.c"
#include "hash/hashTable.c"
#include "arquive/readArquive.c"

int main();

int main()
{
    Element* vector[number] = {NULL};
    readArquive(vector);

    if (verifyVoidVector(vector))
        viewHashTable(vector);
    else
        printf("Vetor vazio!\n");

    return 0;
};