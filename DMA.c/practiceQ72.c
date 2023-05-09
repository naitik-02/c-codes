//create an array of multiplication table of 7 upto 10 (7*10 = 70).
//use relloc to make it store 15 numbers (from 7*10  to 7*15);
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr; 
    int num;
        printf("enter the no of table u want ");
        scanf("%d",&num);
    ptr = (int*)malloc(10*sizeof(int));
    for (int i = 0 ; i < 10 ; i++){
        printf("%d x %d = %d\n",num , i+1 , (num*(i+1)));
    }
    ptr=realloc(ptr,15*sizeof(int));
    printf("        after re alocating        \n");
    for (int i = 0 ; i < 15 ; i++){
        printf("%d x %d = %d\n",num , i+1 , (num*(i+1)));

    }
    
    return 0;
}