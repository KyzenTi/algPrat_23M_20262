#include <stdio.h>

int main(){

    int numero;

    do{
        printf("Digite um número inteiro: \n");
        scanf("%i", &numero);

        if (numero <= 0){
            printf("Número inválido, insira um valor Maior que 0!\n");
        }
    } while (numero <= 0);

    for (int i = 1; i <= 10; i++){
        printf("%i x %i = %i\n", numero, i, numero * i);
    }

    return 0;
}
