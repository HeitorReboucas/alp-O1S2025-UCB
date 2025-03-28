#include <stdio.h>
int main(int argc, char* argv){

float n1, n2;
printf("Diga um valor para N1: ");
scanf("%f", &n1);
printf("Diga um valor para N2: ");
scanf("%f", &n2);
//Soma
float soma = (n1 + n2);
printf("%f + %f = %.1f\n", n1, n2, soma);


return 0;

}