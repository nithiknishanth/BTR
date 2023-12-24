#include<stdlib.h>
#include<stdio.h>

struct node{
    int data;
    struct node * prev;
    struct node * next;
};

void printlisttop(struct node * ptr){
    while(ptr != NULL){
        printf("%d -",ptr->data);
        ptr = ptr->next;
    }
}

void printlistbottom(struct node * ptr){
    while(ptr != NULL){
        printf("%d -",ptr->data);
        ptr = ptr->prev;
    }
}

int main(){
    struct node * n1;
    struct node * n2;
    struct node * n3;
    struct node * n4;
    struct node * head;
    struct node * tail;
    n1 = (struct node*)malloc(sizeof(struct node));
    n2 = (struct node*)malloc(sizeof(struct node));
    n3 = (struct node*)malloc(sizeof(struct node));
    n4 = (struct node*)malloc(sizeof(struct node));

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 49;

    head = n1;
    tail = n4;
    n1->prev = NULL;
    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;
    n3->next = n4;
    n4->prev = n3;
    n4->next = NULL;

    printlisttop(head);
    printf("\n");
    printlistbottom(tail);
    return 0;
}