//decrepted string of Q57;
#include<stdio.h>

void decrypt(char *str){
    char *ptr=str;
    while(*ptr!='\0'){
    *ptr=*ptr-1; // only here is the difference between encrypt and decrypt ;
    ptr++;
}
}


int main(){
    char str[]="objujl";
    decrypt(str);
    printf("the decrypt string is %s",str);
    return 0;
}