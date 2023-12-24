#include<stdio.h>
#include<string.h>
/*
Struct is a collection of related members "Variables"
they can be of different data types
listed under one name in a block of code
very similar to classes in other languages (but no methods)
*/

struct Player{
    char name[12];
    int score;
};

int main(){

    struct Player Player1;
    struct Player Player2; 
    
    strcpy(Player1.name,"Bro");
    Player1.score = 4;
    strcpy(Player2.name,"Broooo");
    Player2.score = 4;
   
    printf("%s\n",Player1.name);
    printf("%d\n",Player1.score);
    printf("%s\n",Player2.name);
    printf("%d\n",Player2.score);

    return 0;
}