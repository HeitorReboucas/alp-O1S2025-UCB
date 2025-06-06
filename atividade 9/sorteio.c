#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    // Verifica se tem número minimo de argumento
    if (argc != 4)
    {
        printf("Informe 3 argumentos");
        return 1;
    }

    int inteiro1 = atoi(argv[1]);
    int inteiro2 = atoi(argv[2]);
    int inteiro3 = atoi(argv[3]);

    // Verifica se os numeros são válidos
    if (inteiro1 > inteiro2 || inteiro3 < inteiro1 || inteiro3 > inteiro2)
    {
        printf("Algo esta errado");
        return 1;
    }
    else{

    // Caso as condições sejam atendidas:
    srand(time(NULL));
    int num_sorteado = (rand() % (inteiro1 - inteiro2)) + inteiro1;

    FILE *arq = fopen("log.txt", "a");
    //Verifica se o arquivo tá certo:
    if (arq == NULL)
    {
        printf("erro ao abrir um arquivo.");
        return 1;
    }
    fprintf(arq, "Menos Valor: %i\n", inteiro1);
    fprintf(arq, "Maior Valor: %i\n", inteiro2);
    fprintf(arq, "Valor Desejado: %i\n", inteiro3);
    fprintf(arq, "\n");

    fprintf(arq, "numero sorteado: %i", num_sorteado);
    fclose(arq);

    return 0;

    }
}