#include <stdio.h>

int main(){

    int a,b,c,aux;

    a = 10;
    b = 5;
    c = 1;
    printf("a = %i, b= %i\n", a,b);

   if (a > b){    
    aux = a;
    a = b;
    b = aux;
   }
    
    printf("a = %i, b = %i\n", a,b);

    return 0;
}
