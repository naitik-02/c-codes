//sum of n natural numbers; 
 #include<stdio.h>

int main(){
    int sum;
    int n;
    printf("enter the no of sum u want :");
    scanf("%d",&n);
    sum=n*(n+1)/2; //it is the formulla of sum of n naitural no;
    printf("the sum of the integers is %d",sum);
    
    return 0;
}