#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]){

char opcao;
printf("Escolha sua opcao:\n");
printf("Circulo: A\n Losango: B\n Quadrado: C\n Retangulo: D\n Trapezio: E\n Triangulo: F\n");

scanf("%c", &opcao);

switch (opcao){

case 'A':
printf("Circulo");
break;

case 'B':
printf("Losango");
break;

case 'C':
printf("Quadrado");
break;

case 'D':
printf("Retangulo");
break;
case 'E':
printf("Trapezio");
break;

case 'F':
printf("Triangulo");
break;

default:
printf("Opcao Invalida");
break;

}

}
