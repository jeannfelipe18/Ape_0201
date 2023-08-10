#include<stdio.h>
main(){
    int numero;

    //armazenar texto em variaveis
    //declaracao
    char nome[50] = "Maria da Silva";
    char nomeUsuario[25];
    char endereco[50];

    printf("o nome digitado é: %s", nome);
    
    // recebendo valores do teclado

    printf("\n Digite o nome do usuario:");
    scanf("%[^\n]", &nomeUsuario);
    printf("Nome Usuario: %s", nomeUsuario);
    //limpar o buffer do teclado
    fflush(stdin);

    //entrada de texto usando fgets
    printf("\n\nDigite o endereco:");
    fgets(endereco, 50, stdin);
    printf("\n O endereco e: %s", endereco);

}