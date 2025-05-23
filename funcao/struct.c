#include <stdio.h>
#define TAM_NOME 64

typedef struct Aluno{
    char nome[TAM_NOME];
    float nota;
} Aluno;

void imprimir_aluno(Aluno alunos){
    printf("Nome: %s \t Nota: %.2f", alunos.nome, alunos.nota);
}

int main(int argc, char* argv[]){

    int qtd_alunos = 2;
    Aluno alunos[qtd_alunos];

    for(int i = 0; i < qtd_alunos; i++){
        printf("Digite o nome do aluno %d: \n", i);
        fgets(alunos[i].nome, TAM_NOME, stdin);
        printf("digite a nota do aluno %d:\n", i);
        scanf("%f", &alunos[i].nota);
        fflush(stdin);
    }

    Aluno aluno_maior_nota = alunos[0];
    Aluno aluno_menor_nota = alunos[0];
    float media_notas = 0.0;
    float soma_notas = 0.0;
    for(int i = 0; i < qtd_alunos; i++){
        if(aluno_maior_nota.nota < alunos[i].nota){
            aluno_maior_nota = alunos[i];
        }

        if(aluno_menor_nota.nota > alunos[i].nota){
            aluno_menor_nota = alunos[i];
        }
    soma_notas += alunos[i].nota;

        
    imprimir_aluno(aluno_maior_nota);
    imprimir_aluno(aluno_maior_nota);



    }

    return 0;
}
