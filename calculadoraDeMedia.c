#include <stdio.h>

int main(){

    int qtdNotas, i;
    i = 0;
    float notas, soma;

    do {
        printf("Digite a quantidade de notas a ser calculadas: ");
        scanf("%i", &qtdNotas);
        
        if ( qtdNotas <= 0)
            printf("número inválido, insira um valor Maior que 0!\n");

    } while (qtdNotas <= 0);
    
    while (i < qtdNotas) {
    
    do{
        printf("Digite o valor da nota%i: ", i+1);
        scanf("%f", &notas);

        if (notas < 0 || notas > 10)
            printf("Nota inválida, insira novamente!\n");
        else{
            soma += notas;
            i++;
        }
    } while ( notas <= 0 || notas > 10);
}
    printf("Soma: %.1f\n", soma);
    printf("Média: %.1f\n", soma/qtdNotas);
    return 0;
}
