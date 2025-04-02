//Estruturas de decisão if, else, else if
//                      se, então, então se
#include <stdio.h>

int main(){
    //Declaração de variaveis
    int idade;

    //Entrada
    printf("Qual é a sua idade? ");
    scanf("%d", &idade);

    //Processamento
    if(idade < 18){
        printf("Você é menor de idade.\n");
    }else if(idade > 18 && idade < 60){
        printf("Você é um adulto.\n");
    }else{
        printf("Você é adulto.\n");
    }
    //Saida
    printf("Sua idade é %d", idade);

    return 0
}
