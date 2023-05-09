#include<stdio.h>
#include<string.h>

int main(){
    
    char str[]="hello";
    char op[]="hello";
     int value = strcmp(str ,op);
     printf("the cmp value of str and op is %d",value);
    return 0;
}