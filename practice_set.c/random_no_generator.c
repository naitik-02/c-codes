// random number generate
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(0));
    number=rand()%100+1; // generate a random number between 1 and 100.
    printf("the no is %d", number);
    
    return 0;
}