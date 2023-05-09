#include<stdio.h>

int main()
{
    int marks[4];//allocate space for 4 integers 

    
    printf("enter marks of first student  : ");
    scanf("%d", &marks[0]);

    printf("enter marks of second student :");
    scanf("%d",&marks[1]);

    printf("enter marks of  third student :");
    scanf("%d", &marks[2]);

    printf("enter marks of fourth tudent : ");
    scanf("%d", &marks[3]);
     printf("you have entered %d and %d ",marks[2] , marks[3]);

    return 0;
}