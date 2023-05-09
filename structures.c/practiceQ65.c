//write a structure capable of storing date .write a functions to compare those dates ;
#include<stdio.h>
 typedef struct date{
    int date ;
    int months;
    int year;

}date;

void display(date d){
    printf("%d/%d/%d\n",d.date,d.months,d.year);
}
void compare(date d1,date d2){
    if(d1.year>d2.year){
        printf("d1 is greater\n ");
    }
        if(d1.year<d2.year){
            printf("d2 is greater");
        }
    if(d1.months>d2.months){
        printf("d1 is greater\n ");
    }
    if(d1.months<d2.months){
        printf("d2 is greater\n ");
    }
    if(d1.date>d2.date){
        printf("d1 is greater\n ");
    }
    if(d1.date<d2.date){
        printf("d2 is greater\n ");
}
    
}

int main(){
    date d1={21,4,22};
    date d2={4,11,20};
    display(d1);
    display(d2);
    compare(d1,d2);
    
    
    return 0;
}