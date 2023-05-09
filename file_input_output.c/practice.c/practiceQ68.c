//write a program to read a text file character by character
// and write its content twice in a seperate file ;
#include<stdio.h>

int main(){
    FILE *ptr1;
    FILE* ptr2;
    char c ;
    ptr1=fopen("filename.txt","r");
    ptr2=fopen("newfile.txt","w");
    
    c = fgetc(ptr1);
    while(c!=EOF){
        fputc(c,ptr2);
        fputc(c,ptr2);
        c =fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);


    return 0;
}