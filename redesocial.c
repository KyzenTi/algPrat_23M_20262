#include <stdio.h>
int main(){
    int idade;
    printf("------------------------------------------------------ \n");
    printf("Para terminar a criação de conta, insira a sua idade: \n");
    printf("------------------------------------------------------ \n\n");
    printf("Digite a sua idade: "); scanf("%i", &idade);
    if      ( idade < 13 && idade >=1 )    printf ("Você NÃO pode criar uma conta. A idade minima é de 13 anos! \n");
    else if ( idade >= 13 && idade <= 17 ) printf ("Você PODE criar uma conta com consentimento dos pais!  \n");
    else if ( idade >= 18 && idade <= 64 ) printf ("Você PODE criar uma conta. Bem-vindo à nossa rede social!  \n");
    else if ( idade >= 65  )               printf ("Você PODE criar uma conta. Lembre-se de verificar nossas configurações de privacidade!  \n");
    else                                   printf ("Idade inválida!  \n");
    return 0;
}