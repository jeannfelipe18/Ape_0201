#include<stdio.h>

main(){

    //declaracao de variavel]
    int x = 10;
    //declaracao do ponteiro
    int *p;
    int *p2;

    p = &x;
    p2 = p;

    (*p) += 10;

    printf("Valor da variavel x: %d", x);

     printf("\nConteudo da variavel x atraves de p2:: %d", *p2);
}