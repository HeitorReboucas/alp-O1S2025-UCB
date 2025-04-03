#include <stdio.h>
#include <math.h>
int main(int argc, char* argv){

float n1, n2;
printf("Diga um valor para N1: ");
scanf("%f", &n1);
printf("Diga um valor para N2: ");
scanf("%f", &n2);
//Soma
float soma = (n1 + n2);
printf("%f + %f = %.1f\n", n1, n2, soma);
//Diferença
float sub = (n1 - n2);
printf("%f - %f = %.1f\n", n1, n2, sub);
//Mult
float mult = (n1 * n2);
printf("%f * %f = %.1f\n", n1, n2, mult);
//DIV
float div = (n1 / n2);
printf("%f / %f = %.1f\n", n1, n2, div);
//Poten
float poten = powf(n1, n2);
printf("%.2f ^ %.2f = %.2f\n", n1, n2, poten);
//Radiciação
float raiz_quadrada = sqrtf(n1);
printf("%.2f^1/2 = %.2f\n", n1, raiz_quadrada);
//resto 
int resto = (int) n1 % (int) n2;
printf("%.0f %% %.0f = %.d\n", n1, n2, resto);
// quociente 
int quociente_int = n1 / (int) n2;
printf("%.2f // %.2f = %d\n", n1, n2, quociente_int);
// Incremento
n1++;
printf("%.2f++ = %.2f\n", n1-1, n1);

// Decremento
n1--;
printf("%.2f--
 = %.2f\n", n1+1, n1);
return 0;
}