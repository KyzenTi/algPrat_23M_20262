#include <stdio.h>
 
int main(){
    int x = 10;
    float notas[5];

    
    float qtd;
 
    printf("char   : %zu byte\n", sizeof(char));
    printf("int    : %zu bytes\n", sizeof(int));
    printf("double : %zu bytes\n", sizeof(double));
    printf("x      : %zu bytes\n", sizeof(x));
    printf("notas  : %zu bytes\n", sizeof(notas));
 

    qtd = sizeof(notas) / sizeof(notas[0]);

    printf("Quantidade de elementos do vetor notas: %f\n", qtd);

    return 0;
}
