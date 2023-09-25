#include<stdio.h>

main(){

    //vetores

    float notas[5];
    float soma,media;

    for(int i = 0; i < 5; i++){
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
    }
    for(int i = 0; i < 5; i++){
        soma += notas[i];
        printf("\n Nota: %d %.2f", i+1, notas[i]);
    }
    media = soma/5;

    printf("Media da turma %f", media);
}