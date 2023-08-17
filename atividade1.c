#include<stdio.h>

main(){
    
    //passo1- alocar espaco de memoria para armazenar dados de entrada, ou seja,definir variaveis

    char nome[50];
    int idade;
    char matricula[15];
    char endereco[100];
    char curso[50];
    int periodo;
    char diciplinas[50];
    float mensalidade;

    //passo2- inserir os dados nos enderecos de memoria reservados, ou seja, nas variaveis.

    printf("Nome: ");
    fgets(nome,50,stdin);
    fflush(stdin);

    printf("\nIdade: ");
    scanf("%d", &idade);
    fflush(stdin);
    
    printf("\nMatricula");
    fgets(matricula,15, stdin);
    fflush(stdin);

    printf("\nEndereco: ");
    fgets(endereco,100, stdin);
    fflush(stdin);

    printf("\nCurso: ");
    fgets(curso,50, stdin);
    fflush(stdin);

    printf("\nPeriodo: ");
    scanf("%d", &periodo);
    fflush(stdin);

    printf("\nDisciplinas:");
    fgets(diciplinas,50, stdin);
    fflush(stdin);

    printf("\nMensalidade: ");
    scanf("%f",&mensalidade);
    fflush(stdin);

    //passo3 - apresentação das informações armazenadas.

    printf("----------------------------------");
    printf("Dados Cadastrados");
    printf("----------------------------------");
    
    printf("\nNome: %s", nome);
    printf("\nIdade: %i", idade);
    printf("\nMatricula: %s", matricula);
    printf("\nEndereco: %s", endereco);
    printf("\nMensalidade: %.2f", mensalidade);
    printf("/nCurso: %s", curso);
    printf("\nPeriodo: %i", periodo);
    printf("Disciplinas: %s", diciplinas);

}