#include<stdio.h>
// A simple program that calulates the factorial of a Number but recursively calling the same function again and again
int factorial(int x){
    if(x<0){
        return 0;
    }else if(x == 0){
        return 1;
    }else if(x == 1){
        return 1;
    }else{
        return x * factorial(x - 1);
    }
    return x;
}


int main(){
    int Number, Answer;
    printf("Please Enter the Required Number :");
    scanf("%d",&Number);

    Answer = factorial(Number);
    printf("The factorial of the Number is : %d",Answer);

    return 0;
}