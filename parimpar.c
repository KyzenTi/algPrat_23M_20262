/*
Código: É feito a entrada de um número inteiro
Verificar se o número é PAR ou ÍMPAR
A saida deverá mostrar o número digitado e se é PAR ou IMPAR.
usar as estruturas if else
*/

#include <stdio.h>

int main(){

    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

     if ( (num % 2) == 0 ){
        printf("O Número %i é PAR \n", num);
     }
     else {
        printf("O número %i é IMPAR \n", num);
     }

    return 0;
}

