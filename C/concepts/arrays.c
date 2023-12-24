#include<stdio.h>

int main(){
    double prices[] = {1,101,55,21,3};
    char name[] = "Bro";

    for(int i = 0;i<5;i++){
        printf("The value of price[%d] is %0.2lf whose buyer is %s\n",i,prices[i],name);
    }

    //similarly you can have a 2d or 3d array
    //example below

    int array2[2][3];
    array2[0][0] = 1;
    array2[0][1] = 2;
    array2[0][2] = 3;
    array2[1][0] = 4;
    array2[1][1] = 5;
    array2[1][2] = 6;
    

    for(int i = 0; i<2;i++){
        for(int j=0;j<3;j++){
            printf("The element at %dx%d is %d\n",i,j,array2[i][j]);
        }
    }
    for(int i = 0; i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",array2[i][j]);
        }
        printf("\n");
    }
    return 0;
}