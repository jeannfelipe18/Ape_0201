#include<stdio.h>

main(){

    int matriz[2][3];
   //percorrendo as linhas
   for(int i = 0; i < 2; i++){
    //percorrendo as colunas
    for(int j = 0; j < 3; j++){
        printf("Digite os dados da matriz: ");
        scanf("%d", &matriz[i][j]);
    }
    printf("\n");
   }

   for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
        printf("%d", matriz[i][j]);
    }
   }
}