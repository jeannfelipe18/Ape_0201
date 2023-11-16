#include<stdio.h>

main(){

    //declaracao de variavel
    int numero;
    numero = 10;

    int *ponteiro;//variavel que guarda endereco de memoria
    //inicializacao do ponteiro
    float *x = NULL;
    double *y;
    struct num *p;

    //inicializacao do ponteiro
    ponteiro = &numero;

    printf("Conteudo do ponteiro x %d", x); 

    printf("\n\nEndereco de memoria da variavel numero: %d", &numero);

    printf("\nEndereco de memoria da variavel ponteiro: %d", &ponteiro);

    printf("\nConteudo da variavel ponteiro: %d", ponteiro);

    //acessando o conteudo da variavel numero através do ponteiro

    printf("\nConteudo da variavel numero apresentado atraves do ponteiro : %d", *ponteiro);

    *ponteiro = 33;//alteracao do conteudo da variavel que o ponteiro faz referencia

    printf("\nConteudo da variavel numero: %d", numero);
    printf("\nConteudo da variavel numero apresentado atraves do ponteiro : %d", *ponteiro);

}
