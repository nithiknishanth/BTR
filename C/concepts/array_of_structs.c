#include<stdio.h>
#include<string.h>

struct Student
{
    /* data */
    char name[12];
    float gpa;
};


int main(){


    struct Student Student1 = {"Spongebob",3.0};
    struct Student Student2 = {"Patrick",2.0};
    struct Student Student3 = {"Sandy",4.0};
    struct Student Student4 = {"Squidwaed",1.0};

    struct Student students[] = {Student1,Student2,Student3,Student4};

    for(int i = 0; i<sizeof(students)/sizeof(students[0]);i++){
        printf("%-12s\t",students[i].name);
        printf("%0.2f\n",students[i].gpa);
        
    }
    


    return 0;

}