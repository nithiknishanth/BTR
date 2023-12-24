#include<stdio.h>
#include<stdlib.h>

int queue[256];
int count=0;

void push(int x){
    queue[count] = x;
    count++;
}

int pop(){
    int res;
    res = queue[0];

    for (int i = 0; i < count - 1; i++)
    {
        queue[i] = queue[i+1];
    }
    
    return res;

}

int main(){

    push(1);
    push(20);
    push(100);
    push(1000);

    int popped;

    popped = pop();
    printf("%d\n",popped);

    popped = pop();
    printf("%d\n",popped);
    popped = pop();
    printf("%d\n",popped);
    popped = pop();
    printf("%d\n",popped);


    return 0;
}



