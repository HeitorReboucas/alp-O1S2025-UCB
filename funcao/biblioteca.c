// Retornar o maior entre dois numeros Retorna o maior entre dois numeros inteiros.
int ler_maior_2n(int a, int b){
    int maior;
    if(a > b){
        maior = a;
    }
    else{
        maior = b;
    }
    return maior;
}
//Maior entre tres numeros inteiros

int ler_maior_3n(int a, int b, int c){
    return maior_2n(maior_2n(a, b), c)
}

//Comparar o maior entre N numeros inteiros

int ler_MENOR_2n(int a, int b){
    int menor;
    if(a < b){
        menor = a;
    }
    else{
        menor = b;
    }
    return menor;
}
