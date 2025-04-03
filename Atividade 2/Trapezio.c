#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]){

float Area, B, b, Altura;

printf("Insira a base maior do trapezio: ");
scanf("%f", &B);
printf("Insira a base menor do trapezio: ");
scanf("%f", &b);
printf("Insira a altura do trapezio: ");
scanf("%f", &Altura);

Area = ( (B + b) * Altura )/2;
printf("A area do seu trapezio eh: %.2f", Area);

return 0;

}
