#include<stdio.h>

main(){

    //vetor de nomes

    /*char nomes [3] [20] = {"Maria", "Pedro", "Jose"};

    for(int i = 0; i < 3; i++){
    printf("Nome: %s", nomes[i]);
    }*/
     char alunos [3] [20];
    for(int i = 0; i < 3; i++){
    printf("Digite o nome: ");
    fgets(alunos[i], 20,stdin);
    fflush(stdin);
    }
    for(int i = 0; i < 3; i++){
    printf("Aluno: %s ", alunos[i]);
    }
}