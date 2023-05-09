#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr=fopen("naitik.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    printf("the value in file is %d\n",num);
    printf("the value in file is %d\n",num2);
    fclose(ptr);
    return 0;
}