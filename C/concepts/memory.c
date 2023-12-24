#include<stdio.h>

// memory is an array of bytes within ram
// memory block is a single unit within memory used to hold some value
// memory address is where a memory block is locates (house address)

int main(){


    int a ='x';
    int b = 'y';


    printf("%lu bytes\n",sizeof(a));
    printf("%lu bytes\n",sizeof(b));

    printf("%p hex\n",&a);
    printf("%p hex\n",&b);

    return 0;
}