#include<stdio.h>


int main(){

/*
    FILE *pF = fopen("text.txt","W");
    fprintf(pF, "SpongeBob square Pants");
    fclose(pF);
*/
    // remove(text.txt) can be used to delete a file

    FILE *pF1 = fopen("/Users/nithiknishanth/Documents/BTR_C/Notes.txt", "r");
    char buffer[255];
    while(fgets(buffer,255,pF1)!= NULL)
    {
    printf("%s",buffer);
    }
    
    fclose(pF1);


    return 0;
}