#include<stdio.h>

void birthday(char name[], int age){
    printf("Happy Birthday to you %s\n ",name);
    printf("Happy Birthday To yoy\n");
    printf("Your age is %d!\n",age);
}
double square(double x){
    double result = x * x;
    return result;
}


int main(){
    char name[] = "Bro";
    int age =21;
    birthday(name,age);
    
    double x = square(3.14);
    printf("%lf",x);
    return 0;
}