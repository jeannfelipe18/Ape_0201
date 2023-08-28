#include<stdio.h>


int main(){
    int A, B, C;


    //Leitura dos valores A, B C
    printf("Digite o valor de A:");
    scanf("%d", &A);


    printf("Digite o valor de B:");
    scanf("%d", &B);


    printf("Digite o valor de C:");
    scanf("%d", &C);


    //ordenar os valores usando a tecnica de seleção
    if(A<B){
        int temp= A;
        A = B;
        B = temp;
    }
    if(A < C){
        int temp= A;
        A = C;
        C= temp;
    }
    if(B <C){
        int temp = B;
        B= C;
        C= temp;
    }


    printf("Valores em ordem descendente: %d, %d, %d\n", A, B, C);
}