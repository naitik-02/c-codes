//encrypt 
#include<stdio.h>

void encrypt(char * str  ){
    char*ptr = str;
    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;
    }

}

int main(){
    char str[]="naitik";
    encrypt(str);
    printf("encrypted string is %s",str);

    return 0;
}