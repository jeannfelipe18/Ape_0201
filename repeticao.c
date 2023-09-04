#include<stdio.h>

int main(){

    //repeticao com condicao no inicio (while)

    int numero = 0;

   numero++;
    printf("\n%d",numero);
    numero++;
    printf("\n%d",numero);
    numero++;
   
   while(numero < 11){
        printf("\n%d",2 * numero);
        numero++;
    }
}