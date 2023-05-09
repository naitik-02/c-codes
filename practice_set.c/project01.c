// number guessing game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int number ; int guess, nguesses =1;
    srand(time(0));
    number=rand()%20 + 1 ;

    do {
        printf("guess the no between 1-20 : ");
        scanf("%d",&guess);
        if (guess<number){
            printf("you are guessing a lower no\n ");

        }
        else if (guess> number){
            printf("you are guessing a higher number \n");
        }
        else{
            printf("you guessed right  no in %d \n attempt",nguesses);

        }
        nguesses++;
    }
    while(number!=guess);

    return 0;
}