//write a function to convert calcius temperature into farenhite .
#include<stdio.h>
float fahrenheit(int celcius);

int main(){
    int celcius ;
    printf("enter celcius ");
    scanf("%d",&celcius);
    printf("farhenhite is %f",fahrenheit(celcius));

    
    return 0;
}
float fahrenheit( int celcius){
    int result;
    result =  (float)(celcius*9/5) + 32 ;
    return result;
}