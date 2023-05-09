 //create a string using " "and print its comtent using a loop ;
#include<stdio.h>

int main(){
    char s[]="naitik singh";
    char*ptr;
    ptr=s;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        *ptr++;
    }
    
    return 0;
}