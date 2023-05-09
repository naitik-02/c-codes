// write your own version of strcpy() function from <string.h>;
#include<stdio.h>
#include <string.h>
 
 char change(char str[] , char str2[]){
    strcpy(str2,str);
    printf("the value of str2 now is %s",str2);
 }

int str(){
    char str[]="naitik singh ";
    chr str2[33];
    change(str,str2);

    return 0;
}