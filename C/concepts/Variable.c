#include<stdio.h>
#include<stdbool.h>

//Variable are allocated space in memory to store a value.
//We refer to a avariable's name to access the stored value
//That variable now behaves as if it was the value it contains
//But we need to declare what type of data we are storing

int main(){
/* Integers and Floats*/
            //Doubles are more precise but uses more memory
    int x; //declaration
    x = 123; //initialization
    float y = 12345; //both declaration and initialization
    printf("The value of x is : %d \n" ,x);
    printf("The value of y is : %0.2f \n", y);

/*Characters and Strings*/
    char grade = 'C'; // single quote for character
    char name[] = "name"; // double quote for strings in C there are no string type, its an array of character
    printf("The value of garde is : %c \n",grade);
    printf("The value of name is : %s \n",name);
    char f = 100; //charcters can also be used to define integers between -128 to +127
                // If you overflow the integer to say +128 it resets it back to -128 and goes forward
    printf("The value of f is %d \n",f);
    printf("The Ascii value of f is %c \n",f); //The same represented as %c character shows its ascii value d
    unsigned char z = 255; //when you use unsigned the rane becomes 0 to +255 doubling our range
    printf("The Ascii value of f x is %c \n",x);

/*Booleans store true or false and need stdbool.h include file*/
    bool a = true;
    printf("The value of bool a is : %d \n",a);

// A constant is a fixed value that cannot be altered by the program during its execution
    const float PI = 3.14159265;
    return 0;
}