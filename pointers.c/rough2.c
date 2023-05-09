// call by reference ;
#include <stdio.h>
int swap(int *a, int *b);

int main()
{
    int x = 6;
    int y = 4;
    swap(&x, &y);
    printf(" the value of x and y after swap is %d and %d  ", x, y);
    return 0;
}
int swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}