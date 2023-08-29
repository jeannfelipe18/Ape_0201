#include<stdio.h>


main(){


    int A =10, B = 15, C= 20, D= 25;


    if(A > B || A > C || A > D){
        printf("A é o maior");
        if(B < D && B < D){
            printf("B é o menor");
        }else if(C < D){
            printf("C é o menor");
        }else{
            printf("D é o menor");
        }
        }else if(B > A && B > C && B > D){
        printf("B é o maior");
        if(A < C && A < D){
            printf("A é o menor");
        }else if(C < D){
            printf("C é o menor");
        }else{
            printf("D é o menor");
        }


    }else if(C > A && C > B && C > C){
        printf("C é o maior");
        if( A < B && A < D){
            printf("A é o menor");
        }else if(B < D){
            printf("B é o menor");
        }else{
            printf("D é o menor");
        }
    }else{
        printf("D é o maior");
        if(A < B && A < C){
            printf("A ó menor");
        }else if(B < C){
            printf("B é o menor");
        }else{
            printf("C é o menor");
        }
    }
}
