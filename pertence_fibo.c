#include <stdio.h>

int fib(int n){
    if(n <= 0){
        return -1;
    }
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }

}

#define RETORNO_NEGATIVO "O numero informado nao pertence a sequencia."
#define RETORNO_POSITIVO "O numero informado pertence a sequencia."
//Uma forma de evitar redundâncias, pois elas atrapalham futuras modificações
char* pertence_fib(int n){
    if(n <= 0){
        return RETORNO_NEGATIVO;
    }
    int i = 1;
    while(n > fib(i)){
        i++;
    }
    if(n == fib(i)){
        return RETORNO_POSITIVO;
    }else{
        return RETORNO_NEGATIVO;
    }
}

int main()
{
    
    int numero_informado;
    scanf("%d", &numero_informado);
    printf("%s\n", pertence_fib(numero_informado));

    return 0;
}
