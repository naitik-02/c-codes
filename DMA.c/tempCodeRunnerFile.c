//write a pogram to create a dynamic array of five floats using malloc();
#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;

     ptr=(float*)malloc(5*sizeof(int));
    for(int i =0 ; i<5; i++){
        printf("enter the value of %d element \n ",i);
        scanf("%f",&ptr[i]);

    }
    for(int i = 0 ; i < 5 ; i++){
        printf("the value of %d element is %f\n",i , ptr[i]);
    }
    
    return 0;
}