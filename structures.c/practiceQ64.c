//create a structure representating a bank account of a custumer;
#include<stdio.h>
 #include<string.h>
 struct custumer{
    char name[20];
    int pin ;
    int balance;
 };

int main(){
    // struct custumer naitik={"rahul",2234,2000000};
    // printf("the name of the custumer is %s\n",naitik.name);
    // printf("the pin of the custumer is %d\n",naitik.pin);
    // printf("the balance of the custumer is %d\n",naitik.balance);
//if many custumers;
struct custumer c[10];
  strcpy(c[0].name,"naitik");
  c[0].pin=2234;
  c[0].balance=2000000000;
    printf("the name of the custumer is %s\n",c[0].name);
    printf("the pin of the custumer is %d\n",c[0].pin);
 printf("the balance of the custumer is %d\n",c[0].balance);
    return 0;
}