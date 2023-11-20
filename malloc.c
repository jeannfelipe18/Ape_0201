#include<stdio.h>
#include<stdlib.h>
int main(){
    //alocacao dinamica funcao malloc, realoc e free
    // funcao malloc retorna um endereco de espaco de memoria alocado
    int *numero;
    int *numero2;
    int x; // alocacao estatica

    numero = (int*)malloc(1 * sizeof(int));// alocacao dinamica
    numero2 = (int*)malloc(1 * sizeof(int));// alocacao dinamica

    printf("endereco alocado: %d", &numero);
    printf("\nendereco alocado numero 2: %d", &numero2);

    if(numero == NULL){
        printf("sem memoria");
        return 1;
    }
    *numero = 10;
    *numero2 = 20;

    *numero= *numero + *numero2;

    printf("\nO valor armazenado no endereco alocado e: %d", *numero);

    free(numero);
    free(numero2);
    
    return 0;
}