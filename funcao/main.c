#include <stdio.h>
#include "biblioteca.h"
#include <stdlib.h>

int main(int argc, char* argv[]){

    int x, y, z;

        if(argc != 3 && argc != 4){
        printf("Informe 2 ou 3 argumentos");
        return 1;}

        if(argc == 3){
    x = atoi (argv[1]);
    y = atoi (argv[2]);
    printf("maior (%d, %d): %d", x, y, ler_maior_2n(x, y));
    printf("menor (%d, %d): %d", x, y, ler_MENOR_2n(x, y));
        } 
        else{
            x = atoi (argv[1]);
            y = atoi (argv[2]);
            z = atoi (argv[3]);
             printf("maior (%d, %d, %d): %d", x, y, z, ler_maior_3n(x, y, z));
             printf("menor (%d, %d): %d", x, y, ler_MENOR_2n(x, y, z));} 
             return 0;
        }

