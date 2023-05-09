// fibonacci sequences
//hint fib(n)=fib(n-1)+fib(n-2)
#include<stdio.h>
int fibonacci( int n );
int main(){
    int num  ; int i; 
    printf( "enter the no of terms " );
    scanf("%d",&num);

 for ( i =0 ; i<num ; i++ ){

    printf("the the fibonacci sequence  to the %d \n" ,fibonacci(i));
 }
    return 0;
}
int fibonacci(int n ){
     if (n==0){
        return 0 ; 

     }
     else if (n==1){
        return 1 ;

     }
      else {
        return fibonacci(n-1)+ fibonacci(n-2);
      }
}