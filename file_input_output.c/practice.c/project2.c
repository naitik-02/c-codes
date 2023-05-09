// snake water gun / STONE PAPER SEASOR
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game(char you, char comp){
if(you==comp)
{
    return 0;
}
if(you=='s' && comp=='w')
{
    return 1;
}
else if(you == 'w' && comp == 's')
{
    return -1;
}
if(you == 's' && comp == 'g')
{
    return -1;
}
else if(you == 'g' && comp == 's')
{
    return 1;
}
if(you == 'w' && comp == 'g')
{
    return 1;
}
else if(you == 'g' && comp == 'w')
{
    return -1;
}
}
int main()
{
    char you ;
    char comp;

    srand(time(0));
    int number = rand()%100+1;
      
    if(number<33){
        comp = 's';
    }
    else if(number>=33 && number<=66){
        comp ='g';

    }
    else {
        comp = 'w';
    
    }
    printf("enter 's' for  snake 'w' for water and 'g' for gun  \n ");
    scanf("%c", &you);
    int result = game(you, comp);

        printf("you choose %c and comp choose %c \n" , you, comp);
    if(result == 0)
    {
        printf("game draw\n");
    }
    else if(result == -1)
    {
        printf("you lose \n");
    }
    else
    {
        printf("you win");
    }

    return 0;
}
