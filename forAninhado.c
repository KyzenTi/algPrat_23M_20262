#include <stdio.h>

int main(){
    
    int i,j;

    for(i = 1; i < 3 ; i++){
        for(j = 4 ; j >= 2 ; j--){
            printf("i: %i j: %i\n", i,j);
        }
    }
    return 0;
}
