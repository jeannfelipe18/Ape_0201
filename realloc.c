#include<stdio.h>
#include<stdlib.h>

int main(){
    char *nome;

    nome = (char*)malloc(5 * sizeof(char));

    printf("Digite um nome");
    scanf("%[^\n]", nome);

    printf("Nome: %s", nome);

    nome = realloc(nome, 10 * sizeof(char));

    scanf("%[^\n]", nome);

    printf("Nome: %s", nome);

    free(nome);
}