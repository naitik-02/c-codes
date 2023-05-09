//write a function to calculate force of attraction on a body of mass m exerted by earth.
 #include<stdio.h>
 float force(float mass);

int main(){
    int mass ;
    printf("enter mass of body \n");
    scanf("%d",&mass);
    printf("the force of attraction is %f ", force(mass));

    
    return 0;
}
float force(float mass){
    float result ;
    result = mass * 9.8 ;
    return result ;
}