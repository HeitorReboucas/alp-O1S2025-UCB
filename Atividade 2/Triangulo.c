#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]){

float Area, Base, Altura;

printf("Insira a base do triangulo: ");
scanf("%f", &Base);
printf("Insira a altura do triangulo: ");
scanf("%f", &Altura);

Area = (Base * Altura) / 2;
printf("A area do seu triangulo eh: %.2f", Area);

return 0;
}
    