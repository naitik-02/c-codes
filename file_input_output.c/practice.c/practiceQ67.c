//write a program to generate multiplication table of a given no in text formate 
//.make sure that the file is readable and well formated ;
#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    printf("enter the number to print its table ");
    scanf("%d",&num);
    ptr = fopen("filename.txt","w");
    
        fprintf(ptr,"the table of %d is below:\n",num);
    for(int i =1 ; i<=10  ; i++){
        fprintf( ptr,"%d x %d = %d\n",num,i,(num*i));
    }
    fclose(ptr);
    return 0;
}