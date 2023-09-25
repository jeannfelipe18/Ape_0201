#include<stdio.h>

main(){

    //vetores

    int numeros[3];

    numeros[0] = 12;
    numeros[1] = 15;
    numeros[2] = 20;

    for(int i = 0; i < 3; i++){
        printf("\n%d %d", i,numeros[i]);
    }
}