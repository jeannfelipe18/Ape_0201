#include<stdio.h>

main(){

    //declaracao de variavel
    int y = 10, x = 20, *pY, *pX;
    pY = &y;
    pX = &x;

    if(*pY > *pX){
        printf("y é maior");
    }else{
        printf("x é maior");
    }
}