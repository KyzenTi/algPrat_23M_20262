#include <stdio.h>

int main(){

    int a,b,c,aux;

    a = 10;
    b = 5;
    c = 1;
    printf("Sequencia inicial: \na = %i, b= %i, c = %i\n\n", a,b,c);

    if (a > b) {  
        aux = a;
        a = b;
        b = aux;
        printf("1° troca: a = %i, b= %i, c = %i\n", a,b,c);
    } // a =5, b =10, c=1
    if ( b > c){
        aux = b;
        b = c;
        c = aux;
        printf("2° troca: a = %i, b= %i, c = %i\n", a,b,c);   
    } // a =5, b=1, c=10
    if ( a > b ){
        aux = a;
        a = b;
        b = aux;
        printf("3° troca: a = %i, b= %i, c = %i\n", a,b,c);
    }   

    return 0;
}
