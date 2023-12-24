#include<stdio.h>
//You must call by reference when swapping values stores in a variable using below pointers

int main(){
    int a = 10;
    int b = 20;
    printf("The value of A before swap is %d\n",a);
    printf("The value of B before swap is %d\n",b);

    int *x = &a;
    int *y = &b;
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;


// you can also use generic pointers to Assign values from different Data Types to different pointes, a generic pointed is declared with Void
/*   void *x = &a;
    void *y = &b;
    void *temp;
    temp = x;
    x = y;
    y = temp;
*/
    printf("The value of A after swap is %d\n",a);
    printf("The value of B after swap is %d\n",b);

    return 0;
}