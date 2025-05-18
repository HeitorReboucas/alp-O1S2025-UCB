#include <stdio.h>
#include <math.h>

// Função que verifica se um número é primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0; // 0 e 1 não são primos
    }
    if (num == 2) {
        return 1; // 2 é primo
    }
    if (num % 2 == 0) {
        return 0; // números pares maiores que 2 não são primos
    }

    int limite = sqrt(num); 
    for (int i = 3; i <= limite; i += 2) {
        if (num % i == 0) {
            return 0; // não é primo
        }
    }
    return 1; // é primo
}g

int main(int argc, char* argv[]) {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d eh um numero primo.\n", numero);
    } else {
        printf("%d nao eh um número primo.\n", numero);
    }

    return 0;
}