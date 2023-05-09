// how to find the largest element in array;
//how to find the smallest element in an array ;
#include <stdio.h>

int largerno(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
} 
 int smallestno(int arr[] , int n , int max ){
    int min = max;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min ;
 }

int main()
{
    int arr[] = {12, 5, 6, 2, 7, 78, 8, 8};

    int max = largerno(arr, 8);
    int min = smallestno(arr, 8 ,max);

    printf("the largest  int in array is %d\n", max);
    printf("the smallest array is %d",min);

    return 0;
}