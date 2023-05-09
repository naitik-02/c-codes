//writer a program to check wheather a givern character is prisent in a string or not ;
#include<stdio.h>

char present(char *str , char c ){
    char *ptr = str;
    while(*ptr = '\0'){
        if (*ptr==c){
            printf("yes %c charcter is occur in string " ,c);

        }
        else{
            printf("no");
        }
    }
}


int main(){
    char str[]="international";
    present(str , 'u');
    printf("%c",present(str , 'u'));

    return 0;
}