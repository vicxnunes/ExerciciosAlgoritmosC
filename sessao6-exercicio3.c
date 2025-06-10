#include <stdio.h>
int main(){

    //Variaveis 
    int numero, p = 0, i = 0;

    //entradas
    printf("Informe um número:");
    scanf("%d", &numero);

    //processamento
    if (numero % 2 == 0){
        p = numero;
    }else{
        i = numero;
    }
    printf("%d\n", p);
    printf("%d", i);
}