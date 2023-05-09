// reverse of 10 arrays;
#include<stdio.h>
void reverse(int *array , int n ){
    int temp ; 
    for (int i = 0 ; i<5 ; i++){
        temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;

    }
}
int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    reverse(array, 10);
    for (int i = 0 ; i<10 ; i++){
        printf("the reverse array is %d\n",array[i]);
    }
    return 0;
}