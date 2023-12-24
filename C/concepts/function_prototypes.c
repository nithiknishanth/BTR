#include<stdio.h>
// Functional prototype is declaration ,w/o before the body
// Ensures that calls to a function are made with the correct arguments
//IMP
// Many C Compilers do not check for parameter matching
//Missing arguments will result in unexpected behaviour
// A function prototype causes the compiler to flag an error if arguments are missing

void hello1(char[],int); //function prototype

int main(){
    char name[] = "Nithik";
    int age = 21;

    hello1(name,age);

    return 0;

}

void hello1(char name[],int age){
    printf("Hello %s\n",name);
    printf("You are %d years old",age);
}