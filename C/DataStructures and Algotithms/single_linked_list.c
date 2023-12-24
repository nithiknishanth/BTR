#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void printlist(struct node* ptr){

    while(ptr != NULL){
        printf("%d -",ptr->data);
        ptr = ptr->next;
    }

}
int main(){
    struct node *n1;
    struct node *n2;
    struct node *n3;
    struct node *n4;
    struct node *head;
    n1 = (struct node*)malloc(sizeof(struct node));
    n2 = (struct node*)malloc(sizeof(struct node));
    n3 = (struct node*)malloc(sizeof(struct node));
    n4 = (struct node*)malloc(sizeof(struct node));
    
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 40;

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;
    
    printlist(head);
    return 0;
}
