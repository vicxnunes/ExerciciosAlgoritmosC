#include <stdio.h> 

int main(){

    //declarando variáveis 
    float altura, peso_ideal ;

    //entrada
    printf(" Qual a sua altura? ");
    scanf("%f", &altura); 

    //Processamento 
    peso_ideal = (72.7 * altura) - 58;

    //saída 
    printf(" Seu peso ideal seria %.2f ", peso_ideal);

}
