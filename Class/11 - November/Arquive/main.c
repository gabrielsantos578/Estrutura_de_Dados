#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define repository "C:\\Users\\Aluno\\Downloads\\Estrutura_de_Dados\\Class\\11 - November\\Arquive\\Activity\\"

#include "aditional.c"
#include "Activity/1/1.c"
#include "Activity/2/2.c"
#include "Activity/3/3.c"

int main()
{
    short opcao = -1;
    char filePath[200];

    while (opcao != 0)
    {

        menu(&opcao);

        switch (opcao)
        {

        case 1:
            strcpy(filePath, repository);
            strcat(filePath, "1\\texto.txt");
            read(filePath);
            break;

        case 2:
            white();
            break;

        case 3:
            number();
            break;

        case 4:

            break;

        case 5:

            break;

        case 0:
            encerrarPrograma();
            break;
        }
    }

    return 0;
};