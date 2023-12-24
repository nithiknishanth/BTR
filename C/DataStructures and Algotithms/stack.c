#include<stdio.h>
#include<stdlib.h>

int stack[255];
int count=0;


void push(int x){
    stack[count] = x;
    count++;
}

int pop(){
    int res = stack[count - 1];
    count--;
    return res;
}


int main(){
    push(1);
    push(2);
    push(3);

    int popped = pop();
    printf("%d\n",popped);
    popped = pop();
    printf("%d\n",popped);
    popped = pop();
    printf("%d\n",popped);
    return 0;
}