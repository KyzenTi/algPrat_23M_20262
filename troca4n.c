#include <stdio.h>

int main(){

    int a,b,c,d,aux,i;
    
    i = 0;

    printf("Digite o valor de 'a':");
    scanf("%i", &a);

    printf("Digite o valor de 'b':");
    scanf("%i", &b);
    
    printf("Digite o valor de 'c':");
    scanf("%i", &c);
    
    printf("Digite o valor de 'd':");
    scanf("%i", &d);
    
    printf("Sequencia inicial: \na = %i, b= %i, c = %i, d = %i\n\n", a,b,c,d);

    if (a > b) {  
        aux = a;
        a = b;
        b = aux;
        i++;
        printf("%i° troca: a = %i, b= %i, c = %i, d = %i \n",i, a,b,c,d);
    } 

    if ( b > c){
        aux = b;
        b = c;
        c = aux;
        i++;
        printf("%i° troca: a = %i, b= %i, c = %i, d = %i \n",i, a,b,c,d);
    } 

    if ( c > d){
        aux = c;
        c = d;
        d = aux;
        i++;
        printf("%i° troca: a = %i, b= %i, c = %i, d = %i \n",i, a,b,c,d);
    } 

    if (a > b) {  
        aux = a;
        a = b;
        b = aux;
        i++;
        printf("%i° troca: a = %i, b= %i, c = %i, d = %i \n",i, a,b,c,d);
    } 

    if ( b > c){
        aux = b;
        b = c;
        c = aux;
        i++;
        printf("%i° troca: a = %i, b= %i, c = %i, d = %i \n",i, a,b,c,d);
    } 

    if ( c > d){
        aux = c;
        c = d;
        d = aux;
        i++;
        printf("%i° troca: a = %i, b= %i, c = %i, d = %i \n",i, a,b,c,d);
    } 


    if ( a > b ){
        aux = a;
        a = b;
        b = aux;
        i++;
        printf("%i° troca: a = %i, b= %i, c = %i, d = %i \n",i, a,b,c,d);
    }   
    printf("\nQuantidade de 'ifs': %i\n", i );

    return 0;
}
