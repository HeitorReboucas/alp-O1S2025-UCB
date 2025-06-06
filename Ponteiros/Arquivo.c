#include <stdio.h>
  
/*
    Modos de abertura de arquivo
    'r' -> para leitura
    'w' -> criar/sobrescrever e escrever no arquivo
    'a' -> criar, se não existir, e adicionar ao final do arquivo
*/

  int main(int argc, char* argv[]){

    FILE *sexta = fopen("Sexta.txt", "w");

    // Verifica abertura do arquivo
    if(sexta == NULL){
        printf("erro ao abrir um arquivo.");
        return 1;
    }
    fprintf(sexta, "Hello, world!");

    fclose(sexta);

    return 0;
  }