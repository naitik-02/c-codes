// write a program having a variable i . print the adress of i 
//,pass this variable to a function and prints its adress . are this adress same ? why ?
#include <stdio.h>
void printadress(int a);

int main()
{
    int i;
    printf("the adress of i is %u \n", &i);
    printadress(i);

    return 0;
}
void printadress(int a)
{
    printf("the adress of i is %u \n", &a);
}