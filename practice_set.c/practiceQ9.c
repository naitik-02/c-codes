#include <stdio.h>
// write a program to give grades to a students
// marks <30 is c
// marks >=30 && marks <70 is B
// marks >=70 && marks <90 is A
// marks >=90 && marks <=100 is A+
int main()
{
    int marks;
    printf("enter marks :");
    scanf("%d", marks);

    if (marks <30 )
    {
        printf("c grade \n");
    }
    else if (marks>=30 && marks <70){
        printf("b grade \n");

    }
else if (marks >=70 &&  marks<90){
    printf("A grade\n");

}
else if(marks >=90 && marks <=100) {
    printf("A++ grade/n");


} 
else {
    printf("nooooooooo");
}
return 0;
}