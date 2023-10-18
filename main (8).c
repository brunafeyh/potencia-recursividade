#include <stdio.h>

long fatnumbers(int n){ //função recursiva
    long int fat = 1;
    if(n == 1) return 1;
    else{ //senão
        fat = n * fatnumbers(n - 1);
        return fat;  
    }
}

long elevado(int n, int x){
    long int i, soma = 1;
    for(i=0; i<x; i++){
        soma *= n;
    }
    return soma;
}

int main()
{
    int n; //valor sendo lido
    scanf("%d", &n);
    int espoente = fatnumbers(n-1);
    printf("%ld\n", elevado(n, espoente));


    return 0;
}




