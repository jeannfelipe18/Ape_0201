#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char nome[30];
    int idade;
    float media;   
}Estudante;

Estudante* cadastrar(int totalEstudantes){
    Estudante estudantes = (Estudante*)malloc(totalEstudantes * sizeof(Estudante));
    if(estudantes == NULL){
        return NULL;
    }
    for(int i = 0; i < totalEstudantes; i++){
        printf("\nDigite o nome: ");
        fflush(stdin);
        scanf("%[^\n]", estudantes[i].nome);
        printf("\nDigite a idade: ");
        fflush(stdin);
        scanf("%d", &estudantes[i].idade);
        printf("\nDigite a media: ");
        fflush(stdin);
        scanf("%f", &estudantes[i].media);
        fflush(stdin);
    }
    return estudantes;
}

void mostrar(Estudante *estudantes, int totalEstudantes){
     for(int i = 0; i < totalEstudantes; i++){
        printf("Nome: %s", estudantes[i].nome);
        printf("\nMedia: %f", estudante[i].media);
        printf("\nIdade: %f", estudante[i].idade);
        printf("\n\n");
     }
}

int main(){
    Estudante *estudantes;
    int totalEstudantes;

    printf("\nQuantos estudantes voce deseja cadastrar?");
    scanf("%d", &totalEstudantes);

    estudantes = cadastrar(totalEstudantes);

    mostrar(estudantes, totalEstudantes);
}