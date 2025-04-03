#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]){

float Area, Base, Altura;

printf("Insira a base do retangulo: ");
scanf("%f", &Base);
printf("Insira a altura do retangulo: ");
scanf("%f", &Altura);

Area = (Base * Altura);
printf("A area do seu retangulo eh: %.2f", Area);

return 0;
}