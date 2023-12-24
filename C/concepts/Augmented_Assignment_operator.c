#include<stdio.h>
#include<strings.h>
/*
An Augmented assignment operator is used to replace a statement where 
it takes a variable as one of its arguments and then assigns the result
back to the sam evariable x = x + 1 as x += 1
*/

int main(){
/*
    int x = 10;
    x = x + 2;
    printf("The value of x is %d \n", x);

    int y = 10;
    y +=2;
    printf("The value of y is %d \n", y);

    scanf("%d", &y);
    printf("The Updated value is %d", y);
*/   
    //fgets can be used to read white spaces
    char name[25];
    printf("whats your name :");
    fgets(name, 25, stdin);
    printf("\n The scanned name is %s", name);

    return 0;
}