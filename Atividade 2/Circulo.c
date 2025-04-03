#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]){

float Area, Raio;
float Pi = 3.14159;
printf("Insira o raio do circulo: ");
scanf("%f", &Raio);

Area = Pi * powf(Raio, 2);
printf("Area do circulo: %f", Area);

}