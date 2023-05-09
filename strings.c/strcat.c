#include<stdio.h>
#include<string.h>
int main(){
    char st[30]="naitik singh";
    char ar[]="super";
    strcat(st,ar);
    printf("the string in st now is %s",st);
    return 0;
}