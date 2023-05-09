//take name and salary of two employes as input from user write them to a taxt file in the following format ;
//name1,3300
//name2,7700
#include<stdio.h>
#include<string.h>


int main(){
    FILE * ptr;
    char name[20];
    int salary ;
    printf("enter the name of first employee\n");
    scanf("%s",&name);
    printf("enter the salary of first employee\n");
    scanf("%d",&salary);
    
    ptr=fopen("employefile.txt","w");
    
    
    fprintf(ptr,"%c,%d",name,salary);
    fclose(ptr);
    
    return 0;
}