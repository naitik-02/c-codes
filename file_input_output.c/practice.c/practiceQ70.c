//write a program to modify a file containing an integer to doule its value ;
#include<stdio.h>

int main(){
    FILE *ptr;
    FILE *ptr2;
    int c ;
    ptr=fopen("double.txt","r");
    fscanf(ptr,"%d",&c);
    ptr2=("double.txt","w");
        int a = (2*c);
        fprintf(ptr2,"%d",a);
    return 0;
}