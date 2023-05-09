#include<stdio.h>
// write a program to check if a student passed or fail 
//marks>30 is pass or marks<30 is fail 
int main(){
    int marks ;
    printf("enter student marks :");//    (0-100)
    scanf("%d",marks);
     
     if(marks>30){
        printf("sutudent is pass ");

     }
     else if (marks<30){
        printf("student is fail ");
     }
     else {
        printf("wrong marks ");
     }

    


    
    return 0;
}