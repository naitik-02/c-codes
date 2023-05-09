// write a character to find if a character entered by user is  upper case or not 
#include<stdio.h>
//upper case character = A,B,C,D,....Z // (65 - 90 )
//lower case character  =a,b,c,d,e,....z // (97 -122)
int main(){
    char chr;

    printf("enter any alphabet ");
    scanf("%c",&chr);

    if ( chr>=65 && chr<=90){
        printf(" %c is an upper case character \n",chr);
    }
    else if (chr>=97 && chr<=122){
        printf("%c is lower case character \n",chr);
    }
    else {
        printf("not a character ");
    }
    return 0;
}