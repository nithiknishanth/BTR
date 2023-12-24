#include<stdio.h>

//basic bubble sort
void sort(int array[],int size){
    for(int i=0 ; i < size - 1 ; i++){
        for(int j=0 ; j< size-i-1 ;j++){
            if(array[j] >array[j+1]){
                int temp =array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(int index = 0; index <size ; index++){
        printf("%d \t",array[index]);
    }
}

int main(){
    int array[] = {9,2,4,1,7,6,5,8,10};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);

}