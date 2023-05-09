// write a function slice() to slice a string .it should change the origional string such that it
// is now the slice string take m and n as start and ending position for slice ;
#include <stdio.h>

 char slice(char str[], int m, int n)
{

    int i = 0;
    while ((m + i) < n)
    {
        str[i] = str[m + i];
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char str[] = "namdhari school";
    slice(str, 3, 7);
    printf("%s", str);

    return 0;
}