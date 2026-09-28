#include <stdio.h>

int main(){
    
    int i,soma = 0;

    i = 0;

    while ( i < 5)
    {
        printf("i = %i", i); 
        soma += i;
        i ++;
    }
    
    printf("Soma é: %i \n", soma);

    return 0;
}

/*
1) Qual valor inicial? 11
2) Qual é a condição? i < 15
3) contador? i++
4) Quantas vezes o looping foi executado? 4
5) Qual o valor tornou a condição falsa? 15
6) Qual é a saida? 11, 12, 13, 14
7) Qual é a soma dos valores? 

1) 4 
2) i > -1
3) i--
4) 5
5) -1
6) 4 3 2 1 0

1) 0 
2) i <= 10
3) i += 2
4) 6
5) 12
6) 0 2 4 6 8 10

*/
