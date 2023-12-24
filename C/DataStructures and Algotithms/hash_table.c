#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../../../../../../Library/Developer/CommandLineTools/SDKs/MacOSX14.2.sdk/System/Library/Frameworks/Kernel.framework/Versions/A/Headers/stdbool.h"

/*
How Hashing Actually works is that Initially when we push a Name to a hash it creates a unique hash value.
And when a similar name is checked the same reproudcable has is created which inturn acts as an Index in struct
which is used to obtain age for that name

operation is in o(1) linear time irrespective of hash table size


*/


#define TABLE_SIZE 10
#define NAME_SIZE 256

typedef struct {
    char name[NAME_SIZE];
    char age;
}person;


person * hash_table[TABLE_SIZE];

unsigned int hash(char *name){
    int length = strnlen(name, NAME_SIZE);
    unsigned int hash_value = 0;
    for(int i=0;i<length;i++){
        hash_value += name[i];
        hash_value = (hash_value * name[i]) % TABLE_SIZE;
    }
    return hash_value;
}

void init_hash_table(){
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hash_table[i] = NULL;
    }
    //table is empty
    
} 
void print_table(){
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if(hash_table[i] == NULL){
            printf("\t%i\t--\n",i);
        }else{
            printf("\t%i\t%s\t\n",i,hash_table[i]->name);
        }
        /* code */
    }
}

person *hash_table_lookup(char *name){
    int index = hash(name);
    if (hash_table[index] != NULL && strncmp(hash_table[index]->name, name,TABLE_SIZE)==0){
        return hash_table[index];
    }else{
    return NULL;
    }
}


bool hash_table_insert(person *p){
    if (p == NULL) return false;
    int index = hash(p->name);
    if(hash_table[index] != NULL){
        return false;
    }
    hash_table[index] = p;
    return true;
}


int main(){

    init_hash_table();

    
    person jcob = {.name="Jcob",.age = 18};
    person Anil = {.name="Anil",.age = 28};
    person Kapoor = {.name="Kapoor",.age = 20};
    person Karan = {.name="Karan",.age = 27};
    person Swathi = {.name="Swathi",.age = 15};

    hash_table_insert(&jcob);
    hash_table_insert(&Anil);
    hash_table_insert(&Kapoor);
    hash_table_insert(&Karan);
    hash_table_insert(&Swathi);
    print_table();
    /*
    printf("Jacob -> %u\n",hash("Jcob"));
    printf("Smith -> %u\n",hash("Smith"));
    printf("Anil -> %u\n",hash("Anil"));
    printf("KapoorA -> %u\n",hash("Kapoora"));
    printf("Cult -> %u\n",hash("cult"));
    */

   person *tmp = hash_table_lookup("Anil");
   printf("Found %s whose age is %d ", tmp->name,tmp->age);
   return 0;
}