#include <stdio.h> 
int main(int argc, char* argv[]){

    float peso;
    float altura;

    printf("Seu peso: ");
    scanf("%f", &peso);
    printf("Sua altura: ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);
    printf("IMC: %.2f", imc);

     return 0;}