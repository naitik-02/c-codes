// write your own version of strlen fucction from <string.h>
#include <stdio.h>

int strlen(char str[])
{
    char *ptr = str;
    int len = 0;

    while(*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char str[] = "naitik singh";

    int v = strlen(str);
    printf("the legth of string is %d", v);

    return 0;
}