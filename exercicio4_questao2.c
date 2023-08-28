#include<stdio.h>
#include<math.h>
main(){
    /*Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor.*/

    int A =10, B = 15, C = 20, D = 25;

    if(A > B && A > C && A> D){
        printf("A é o maior");
        }if(B < C && B < D){
            printf("B é o menor");
        }else if(C < D){
            printf("C é o menor");
        }else{
            printf("D é o menor");
        }else if(B > A && B > C && B > D){
        printf("B é o maior");
        }if(A < C && A < D){
            printf("A é o menor");
        }else if(C < D){
            printf("C é o menor");
        }else{
            printf("D é o menor");
        }else if(C > A && C > B && C > D){
            printf("C é o maior");
        }if(A < B && A < D){
            printf("A é o menor");
        }else if(C < D){
            printf("C é o menor");
        }else{
            printf("D é o menor");
        }else{
            printf("D é o maior");
        }if(A < B && A < C){
            printf("A é o menor");
        }else if(B < D){
            printf("B é o menor");
        }else{
            printf("C é o menor");
        }
}