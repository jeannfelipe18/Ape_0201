#include<stdio.h>

main(){
    float salarioMinimo = 1320.00;
    float salario;

    printf("\nDigite o salario atual:");
    scanf("%f", &salario);

    if(salario > salarioMinimo){
        printf(" %s,O salario é maior");
    }else if(salario == salarioMinimo){
        printf("%s, O salario é igual");
    }else{
        printf("O salario menor");
    }
}