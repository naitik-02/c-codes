// write a program to read the three integers from a file;
#include<stdio.h>

int main(){
    FILE *ptr;
    int a,b , c ;
    ptr = fopen("filename.txt","r");
    fscanf(ptr,"%d %d %d ",&a,&b ,&c);
    printf("the value of three integers is %d %d %d ",a,b,c);
    fclose(ptr);
    return 0;
}