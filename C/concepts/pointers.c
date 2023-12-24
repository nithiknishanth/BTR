#include<stdio.h>

//pointers are a variable like references that hold a memory address to another variable
//some tasks are performed more easily with pointers
// * indicates operator - value of address
int main(){
    int age = 21;
    int *pAge = &age;
    printf("address of age is %p\n", &age);
    printf("value of age is %d\n",age);
    printf("value of PAge is %p\n",pAge);
    printf("value stored pAge is %d\n",*pAge); //dereferencing
    return 0;
}