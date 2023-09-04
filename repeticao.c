#include<stdio.h>

int main(){

    //repeticao com condicao no inicio (while)

    int numero = 0;
   
  /* while(numero < 11){
        printf("\n%d",2 * numero);
        numero++;
    }*/
    /*do{
        printf("\n%d", 2 * numero);
        numero++;
    }while(numero == 100);*/

    for(int contador = 100; contador <= 200; contador++){
        printf("\n%d", contador);
    }
}
