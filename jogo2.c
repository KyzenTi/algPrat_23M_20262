#include <stdio.h>

int main(){
    
    int num;

    printf("------------------------------------------------- \n");
    printf("Você entra na masmorra e precisa decidir... \n");
    printf("------------------------------------------------- \n\n");
    printf("Digite um número: ");
    scanf("%i", &num);
    printf("------------------------------------------------- \n");

    switch ( num ){
    case 1 :
    printf("Sai correndo! Não dá pra enfrentar \n");
    break;
    
    case 2 :
    printf("Sai correndo! Não dá pra enfrentar \n");
    break;
    
    case 3 :
    printf("Se esconda e aguarde reforços! \n");
    break;
    
    case 4 :
    printf("Se esconda e aguarde reforços! \n");
    break;
    
    case 5 :
    printf("Bora enfrentar o BOOOSSS! \n");
    break;
    
    case 6 :
    printf("Bora enfrentar o BOOOSSS! \n");
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
    return 0;
}
