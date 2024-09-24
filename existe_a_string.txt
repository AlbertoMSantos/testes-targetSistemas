#include <stdio.h>

void existe_A(char* str){
    int i = 0;
    int contador = 0;
    
    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'A') contador++;
        i++;
    }
    
    if(contador == 0){
        printf("Nao existe nenhuma letra 'a' na string.\n");
    }else{
        printf("Existe um total de %d letra(s) 'a' na string.\n", contador);

    }
}


int main()
{
    
    char str_informada[264];
    scanf("%s", str_informada);
    existe_A(str_informada);

    return 0;
}

