//writing a file in c;
#include<stdio.h>

int main(){
    FILE *ptr;
    int num=34567;
    ptr=fopen("don.txt","w");
    fprintf(ptr,"%d\n",num);
    fprintf(ptr,"thanks for using the don\n");
    fclose(ptr);
    return 0;
}
