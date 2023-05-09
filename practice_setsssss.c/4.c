#include <stdio.h>
void swap(int m, int n)
{
   int x = m;
   
   x = n;
   n = m;
}
main()
{
   int x=5, y=3;

   swap(x,y);
   printf("%d %d", x, y);
}
