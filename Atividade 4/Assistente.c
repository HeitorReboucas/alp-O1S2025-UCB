#include <stdio.h>

int main(int argc, char* argv[]){
char opcao1;
float gleve, gintenso;


//Inicio de escolha
printf("Escolha uma categoria:\n");
printf("\nA - Leves\nB - Intensos\n");
scanf("%c", &opcao1);

//Filmes Leves
if(opcao1 == 'A'){
     printf("Escolha um genero leve:");
     printf("\n1 - Comedia\n2 - Romance\n3 - Animacao\n");
     scanf("%f", &gleve);
    //Comedia
    if(gleve == 1){
        printf("3 - Gente Grande\n2 - Gende Grande 2\n3 - Click");

    }
    //Romance
    if(gleve == 2){
        printf("1 - Laland\n 2 - BabyGirl\n 3 - Sua Culpa\n");

    }
    //Animação
    if(gleve == 3){
        printf("1 - Moana\n 2 - A Pequena Sereia\n3 - Sonic 3\n");

    }


} else if(opcao1 == 'B'){
    printf("Escolha um genero intenso:");
    printf("\n1 - Horror\n2 - Suspense\n3 - Acao\n");
    scanf("%f", &gintenso);
    //Horror
    if(gintenso == 1){
        printf("1 - Invocacao do Mal\n2 - Sorria 2\n3 - Herege\n");

    }
    //Suspense
    if(gintenso == 2){
        printf("1 - Alien Romulus\n 2 - Coringa\n 3 - Pisque duas vezes");

    }
    //Ação
    if(gintenso == 3){
        printf("1 - Vingadores Guerra Infinita\n2 - Espetacular Homem Aranha\n3 - Planeta dos Macacos");
        
    }

}

return 0;
}