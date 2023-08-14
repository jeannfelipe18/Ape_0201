#include<stdio.h>

main(){
    //operadores aritméticos - soma (+), subtração (-)
    //divisão (/) multiplicação (*) e modulo (%)
    //atenção a ordem de precedencia

    //escrever um algoritmo que realize a subtração de dois numeros e apresente o resutado

    //passo 1 - declarar variaveis
    //passo 2 - recebe os dados
    //passo 3 - monta a operação de processamento (calculo)
    //passo 4 - apresenta a saída

    int num1, num2, resultadoSoma, resultadoSub, resultadoMult;
    float resultadoDiv;

    printf("Digite o numero1:");
    scanf("%d", &num1);
    printf("Digite o segundo numero:");
    scanf("%d", &num2);

    //Montar as operações:

    resultadoSoma = num1 + num2;
    resultadoSub = num1 - num2;
    resultadoMult = num1 * num2;
    resultadoDiv = (float)num1 / num2;

    //apresentação dos resultados
    printf("\nResultado soma: %d", resultadoSoma);
    printf("\nO resultado da subtracao e: %d", resultadoSub);
    printf("\nResultado divisao: %.f", resultadoDiv);
    printf("\nResultado mulplicaçao: %d", resultadoMult);
}