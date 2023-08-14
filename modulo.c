#include<stdio.h>

main(){

    //operador modulo- retorna o resto da divisão de numeros inteiros

    int numero1, numero2, restoDivisao;

    printf("Digite o primeiro numero\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero\n");
    scanf("%d", &numero2);

    restoDivisao = numero1 % numero2;

    printf("Resultado do operador modulo: %d", restoDivisao);
}