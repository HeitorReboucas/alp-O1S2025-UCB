#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]){

float Area, D, d;

printf("Insira a diagonal maior do losango: ");
scanf("%f", &D);
printf("Insira a base menor do losango: ");
scanf("%f", &d);

Area = (D * d)/2;
printf("A area do seu losango eh: %.2f", Area);

return 0;
}