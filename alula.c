#include<stdio.h>
main(){


/*declaracao de variavel

Letras minusculas
Não iniciar com caracteres especiais, numero, Letras maiusculas
A variavel precisa representar o dados que armazena
usar padrão camel case

*/
/*
Especificadores de formato (onde apresentar o dado da variável)
    int = "%d" "%i"
    double = "%lf"
    float = "%f"
    char = "%s" "%c"
*/

int numero1 = 20000;
int numero2 = 10;

float numero3 = 2.1;
double numero4 = 3.5;

//concatenação de string com variáveis
printf("O valor armazenado na variável 1 é: %d e na variável 2 é: %d", numero1, numero2);
printf("\n O valor da variável float é: %.2f", numero3);
printf("\n O valor da variável double é: %.2lf", numero4);

int idade;
printf("\n\n Digite sua idade \n");
scanf("%d", &idade);

printf("sua idade é: %d", idade);
}