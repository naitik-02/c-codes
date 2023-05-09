//reverset the array
#include<stdio.h>
int rev(int a){
    int rev = 0;
    int rem;
    while(a!=0){
        rem = a%10;
        rev = (rev*10)+rem;
        a = a/10;
    }
    return rev;
}

int main(){
    int a = 23456;
    int reverse= rev(a);

    printf("%d",reverse);
    return 0;
}