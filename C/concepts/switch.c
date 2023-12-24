#include<stdio.h>

int main(){

    char grade;
    printf("Enter the letter of grade :");
    scanf("%c", &grade);
    switch(grade){
        case 'A':
            printf("\nperfect !");
            break;
        case 'B':
            printf("\nYou did fine");
            break;
        default:
            printf("\nEnter a valid grade");
            break;
    }
    return 0;
}