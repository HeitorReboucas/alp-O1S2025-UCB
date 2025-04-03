#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]){

float Area, Lado;

printf("Insira o lado do quadrado: ");
scanf("%f", &Lado);

Area = (Lado * Lado);
printf("A area do seu quadrado eh: %.2f", Area);

return 0;
}