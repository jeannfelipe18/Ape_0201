#include<stdio.h>

main(){

    char alunos[3][20];
    float notas[3][3], soma, media;

    for(int i = 0; i < 3; i++){
        printf("Digite o nome do aluno: ");
        fgets(alunos[i] , 20, stdin);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite a nota do aluno: ");
            scanf("%f", &notas[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++){
        soma = 0;
        for(int j = 0; j < 3; j++){
            soma += notas[i][j];
        }
        media = soma/3;
        printf("Nome: %s",alunos[i]);
        printf("Media: %.2f", media);
    }
}