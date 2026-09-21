#include <stdio.h>

int main(){
    
    int num;

    printf("------------------------------------------------- \n");
    printf("Você entra na masmorra e precisa decidir... \n");
    printf("------------------------------------------------- \n\n");
    printf("Digite um número: ");
    scanf("%i", &num);
    printf("------------------------------------------------- \n");

    if ( num == 1 || num == 2 ) {;
        printf("Sai correndo! Não dá pra enfrentar \n");
    }

    else if ( num == 3 || num == 4 ) {;
        printf("Se esconda e aguarde reforços! \n");
    }
    
    else if ( num == 5 || num == 6 ) {;
        printf("Bora enfrentar o BOOOSSS! \n");
    }

    else {
        printf("Opção inválida! Reinicie o jogo! \n");
        return 1;
    }

    return 0;
}
