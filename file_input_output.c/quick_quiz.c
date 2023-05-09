// modify the program above to check wheather the file exists or not ;
#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;

    ptr = fopen("naitif.txt", "r");//here the file name was wrong so it gives us not exist prints;
    if(ptr==NULL){
        printf("this file does not exist");
    }
    else{
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    printf("%d\n", num);
    printf("%d\n", num2);
    }
    fclose(ptr);
    return 0;
}