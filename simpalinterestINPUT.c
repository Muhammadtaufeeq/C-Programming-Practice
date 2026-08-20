#include<stdio.h>

 int main (){
    float principal , rate , time , SI;

    printf("Enter principal: ");
    scanf("%f", &principal);
    
    printf("Enter rate : ");
    scanf("%f" , &rate);

    printf("Enter time : ");
    scanf("%f" , &time);
    
    SI = (principal * rate * time ) /100;
    
    printf("simpal interest is : %f" ,SI);
    return 0;

 }