#include<stdio.h>

main(){

    char alunos[5][20];
    float notas[5][3], soma, media;

    //nome ddos alunos
    for(int i = 0; i < 5; i++){
        printf("Digite o nome do aluno ");
        fgets(alunos[i] , 20, stdin);
    }
    for(int i = 0; i < 5; i++){
        soma= 0;
        for(int j = 0; j < 3; j++){
            printf("Digite a nota do aluno: ");
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        printf("\n");
        media = soma/3;
        printf("\n Nome do aluno: %s e nota do aluno: %f", alunos[i], media);
    }
}