#include <stdio.h>

int main(){
    
    int num;

    printf("------------------------------------------------------ \n");
    printf("Para terminar a criação de conta, insira a sua idade: \n");
    printf("------------------------------------------------------ \n\n");
    printf("Digite a sua idade: "); scanf("%i", &num);
    
    if      ( num < 13 && num >=1 )           printf (" Você NÃO pode criar uma conta. A idade minima é de 13 anos! \n");
    else if ( num >= 13 && num <= 17 )        printf ("Você PODE criar uma conta com o consentimento dos pais!  \n");
    else if ( num >= 18 && num <= 64 )        printf ("Você PODE criar uma conta. Bem-vindo à nossa rede social!  \n");
    else if ( num >= 65  )                    printf ("Você PODE criar uma conta. Lembre-se de verificar nossas configurações de privacidade!  \n");
    else                                      printf("Idade inválida!  \n");

    return 0;
}