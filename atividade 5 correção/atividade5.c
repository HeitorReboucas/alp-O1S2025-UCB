#include <stdio.h>

int main(int argc, char* argv[]){

int Alunos;
printf("Insira o numero de alunos:");
scanf("%d", &Alunos);

float NotasAlunos[Alunos];

for(int I = 0; I <= Alunos; I++){
    do{
printf("Digite a nota do aluno %d", I);
scanf("%f", &NotasAlunos[I]);

} while (NotasAlunos[I] >= 10.0 || NotasAlunos[I] < 0.0);

}

int NotaLoc = 0.0;

printf("\nNota em uma posicao apresentada: ");
scanf("%d", &NotaLoc);

float SomaNotas = 0.0;
float MediaNotas = 0.0;
float MenorNota = NotasAlunos[0];
float MaiorNota = NotasAlunos[0]; 
int AlunosAprovados = 0;

for(int I = 0; I < Alunos; I++){
    SomaNotas += NotasAlunos[I];

    if(MenorNota > NotasAlunos[I]){
        MenorNota = NotasAlunos[I];
    }
    if(MaiorNota < NotasAlunos[I]){
    MaiorNota= NotasAlunos[I];
    }
    if(NotasAlunos[I] >= 6.0)
    AlunosAprovados++;
}

MediaNotas = SomaNotas / Alunos;
printf("\nMedia das Notas %.2f", MediaNotas);
printf("\nMaior Nota %.2f", MaiorNota);
printf("\nMenor Nota %.2f", MenorNota);
printf("\nAlunos aprovados Nota %.2f", AlunosAprovados);
printf("\nNota do aluno na posicao %d: %2.f", Alunos, NotaLoc);





    return 0;

}