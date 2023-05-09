// write a program to count the occurance of a given character in a string;
#include <stdio.h>

int occurance(char *str, char c)
{
    char *ptr = str;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char str[] = "intertainment";
    occurance(str, 'n');
    int count;
    printf("the no of occurance is %d", occurance(str, 'n'));

    return 0;
}