//create an array of size 3 x 10 comtaining multiplication table of the no 2,7 and 9 respectively .
#include<stdio.h>
int table( int *multtable , int num , int n ){
    printf("multiplication rtable of %d is \n",num);
    for (int i = 1 ; i< n ; i++){
        multtable[i]=num*(i);
    
        printf("%d x %d = %d \n",num , i , multtable[i]);
    }

}

int main(){
     int multtable[3][10];
     
     table(multtable[0],2 ,10);
     table(multtable[1],7,10);
     table(multtable[2],9,10);

     
    
    return 0;
} 