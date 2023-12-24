#include<stdio.h>

int main(){
    double prices[] = {1,101,55,21,3};
    char name[] = "Bro";

    for(int i = 0;i<5;i++){
        printf("The value of price[%d] is %0.2lf whose buyer is %s\n",i,prices[i],name);
    }


    return 0;
}