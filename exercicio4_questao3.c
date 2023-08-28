#include<stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");


    int num1, num2, num3;
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &num2);
    printf("Digite o terceiro valor:");
    scanf("%d", &num3);


    if (num1 > num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3){
        int temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3){
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    
    printf("\n\nValores em ordem crescente: %d, %d, %d\n", num1, num2, num3);

}
