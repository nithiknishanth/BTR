#include<stdio.h>


int main(){

    //for loops repeats a section of code a limited amount of times


    for(int index =1 ;index <= 10; index++){
        printf("The index is %d\n",index);
    }

    //while loops repeats a section of code possibly unlimited times
    int i = 1;

    while(i<=5){
        printf("While I is %d\n",i);
        i++;
    }


    do{
        printf("reverse of while I is %d\n",i);
        i--;
    }while(i>=1);


    return 0;

}