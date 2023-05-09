//how to find the smallest integer in array;
#include<stdio.h>

int smallestnoo(int arr[], int n){
    int least=0;
    for(int i = 0 ; i < n ; i++){
        if (arr[i]< least){
            least = arr[i];
        }
    
    }
    return least;

}


int main(){
    int arr[]={22,33,12,4,33,5,66,77,88};
    int smallestno = smallestnoo(arr, 9);
    printf("the smallest array is %d",smallestno);

    return 0;
}