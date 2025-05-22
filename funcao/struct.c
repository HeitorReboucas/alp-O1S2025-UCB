#include <stdio.h>
#define TAM_NOME 64

typedef struct Aluno{
    char nome[TAM_NOME];
    float nota;
} Aluno;

void imprimir_aluno(Aluno a){
    printf("Nome: %s \t Nota: %f", a.nome, a.nota);
}


int main(int argc, char* argv[]){

    int qtd_alunos = 0;

    printf("Quantidade de aluno:");
    scanf("%f", &qtd_alunos);

    Aluno alunos[qtd_alunos];

    for(int i = 0; i < qtd_alunos; i++){
        printf("Digite o nome do aluno %d: \n", qtd_alunos);
        fgets(alunos[i].nome, TAM_NOME, stdin);
        printf("digite a nota do aluno %d:\n", qtd_alunos);
        scanf("%f", alunos[i].nota);
    }


    return 0;
}
