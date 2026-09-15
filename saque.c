/*
Máquina de saque.

Solicite o valor do saque (INT)

*/
#include <stdio.h>

int main(){
    int saque, cedulas, saldo = 0;

    printf("Digite o valor do saque: ---: ");
    scanf ("%i", &saque);

    // Saque das notas de 50

    if ( !(saque % 10 == 0) ){
        printf("Não é possível sacar este valor %i: \n", saque);
        return 1;
    }
    
    cedulas = saque / 50;
    printf("Quantidade de cedulas de R$50: %i \n", cedulas);
    
    saldo = saque % 50;
    printf("Saldo restante: %i \n", saldo);

    // Saque das notas de 20
    cedulas = saldo / 20;
    printf("Quantidade de cedulas de R$20: %i \n", cedulas);
    
    saldo %= 20;
    printf("Saldo restante: %i \n", saldo);

    // saque das notas de 10
    cedulas = saldo / 10;
    printf("Quantidade de cedulas de R$10: %i \n", cedulas);

    saldo %= 10;
    printf("Saldo restante: %i \n", saldo);
    
    return 0;
}