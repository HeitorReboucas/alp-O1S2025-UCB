#include <stdio.h> 
#include <math.h>
int main(int argc, char* argv[]){

    float peso, altura, imc;

    printf("Seu peso: ");
    scanf("%f", &peso);
    printf("Sua altura: ");
    scanf("%f", &altura);

    imc = peso / powf(altura, 2);
    printf("IMC: %.3f\n", imc);
    
//Baixo peso
if(imc <= 18.5){
printf("Baixo peso\n");
}

//Intervalo normal
if(imc > 18.5 && imc <= 24.9){
printf("Intervalo normal\n");
}

//Sobrepeso
if(imc > 24.9 && imc <= 29.9){
printf("Sobrepeso\n");
}

//Obesidade I
if(imc > 29.9 && imc <= 34.9){
printf("Obesidade I\n");
}

//Obesidade II
if(imc > 34.9 && imc <= 39.9){
printf("Obesidade II\n");
}
//Obesidade III
if(imc > 39.9){
printf("Obesidade III\n");
}

     return 0;}