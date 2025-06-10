#include <stdio.h> 
int main(){

    //Variaveis
    int numero, a, b;

    //Entradas
    printf("Informe um número: ");
    scanf("%d", &numero);

    //processamento 
    if (numero>0){
        a = numero; 
        printf("O %d número é positivo.", numero);

    }else{
        b = numero;
        printf("O %d número é negativo.", numero);
        
    }
}