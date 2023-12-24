#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef struct treenode{
    int value;
    struct treenode * left;
    struct treenode * right;

}treenode;

treenode *createnode(int value){
    treenode * result = malloc(sizeof(treenode));
    if (result != NULL){
        result->left = NULL;
        result->right = NULL;
        result->value = value;
    } 
    return result;
}


void printtree(treenode *root){

    if(root == NULL){
        printf("--<empty>---\n");
        return;
    }   
    printf("value = %d\n",root->value);
    printf("left\n");
    printtree(root->left);
    printf("right\n");
    printtree(root->right);
    printf("Done");

}




int main(){
    treenode *n1 = createnode(10);
    treenode *n2 = createnode(11);
    treenode *n3 = createnode(12);
    treenode *n4 = createnode(13);
    treenode *n5 = createnode(14);
    
    n1->left = n2;
    n1->right = n3;
    n3->left = n4;
    n3->right = n5;

    printtree(n1);


    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);


}