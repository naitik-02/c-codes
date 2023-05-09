#include <stdio.h>

void printarray(int *ptr, int n)
{
    for (int i = 0; i<n; i++)
    {
        printf("the value of element %d is %d \n", i + 1, *(ptr+i));
    }
}
int main()
{
    int array[] = {22, 33, 44, 55, 66, 77, 88, 99};
    printarray(array, 8);

    return 0;
}