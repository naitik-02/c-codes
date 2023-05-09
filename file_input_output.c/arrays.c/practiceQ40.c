//write a program to print the marks of students in subject ;
#include<stdio.h>

int main(){
    int marks[2][3];
      int total_students = 2;
      int total_sub = 3;
     for(int i=0 ; i<2 ;i++){
        for(int j=0 ; j<3 ; j++){
            printf("enter the marks of student %d in subjects %d \n",i+1 ,j+1);
            scanf("%d",&marks[i][j]);
        }

     }  
          for(int i=0 ; i<2 ;i++){
        for(int j=0 ; j<3 ; j++){
            printf(" the marks of student %d in subjects %d is %d \n",i+1 ,j+1 ,marks[i][j]);
        }
          }
    return 0;
}