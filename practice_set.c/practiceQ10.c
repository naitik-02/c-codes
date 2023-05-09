#include <stdio.h>
// write a program to check if a student is pass or fail
// marks >30 is pass
// marks < 30 is fail
// make this program by  ternary operator

int main()
{
    int marks;
    printf("enter marks obtained ");
    scanf("%d", &marks);

    marks > 30 && marks <= 100 ? printf(" pass\n") : printf("fail"); //  this is ternaryt operator

    return 0;
}