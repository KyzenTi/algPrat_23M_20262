#include <stdio.h>

int main(){

    int a,b,aux;

    a=10;
    b=5;
    printf("a = %i, b= %i\n", a,b);

    aux = a;
    a = b;
    b = aux;
    
    printf("a = %i, b = %i\n", a,b);

    return 0;
}
