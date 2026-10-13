#include <stdio.h>
 
int main(){

    float moeda[] = {0.05, 0.10, 0.25, 0.50, 1.00, 1.50};


    int x[3];
    x[0]=10;
    x[1]=20;
    x[2]=50;
    printf("x[0]=%d, x[1]=%d, x[2]=%d \n",x[0], x[1], x[2]);
    printf("moeda[0]=%f, moeda[1]=%f, moeda[2]=%f, moeda[3]=%f, moeda[4]=%f, moeda[5]=%f \n",moeda[0], moeda[1], moeda[2],moeda[3], moeda[4], moeda[5]);
 
    return 0;
}
