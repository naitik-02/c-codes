//create an array of ten no .verify using pointer arithemetic that (ptr +2)points 
//the third element where ptr is a pointer to the first element of the array .
#include<stdio.h>

int main(){
    int arry[10];
    int * ptr = arry;
    ptr = ptr + 2 ;
     if (ptr==&arry[2]){
    printf("these points the same location in the memory ");
     }
    else{
        printf("these not points to the same location to the memory ");
    }
    return 0;
}