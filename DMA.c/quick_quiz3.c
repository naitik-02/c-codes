//write a program to demonstrate the usage of free() with malloc();
#include<stdio.h>
#include<stdlib.h>


int main(){
    int *ptr;
    int*ptr2;
    ptr=(int*)malloc(3*sizeof(int));
    for(int i = 0 ; i<3 ; i++){
        ptr2=(int*)malloc(49834*sizeof(int));
        printf("enter the %d element: \n",i);
        scanf("%d",&ptr[i]);
        free(ptr2);

    }
        for(int i = 0 ; i<3 ; i++){

    printf("the %d element is %d\n",i , ptr[i]);

        }
    return 0;
}