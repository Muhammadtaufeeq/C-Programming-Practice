#include<stdio.h>
 
int main(){

    int a , b , r;
    
    printf("Enter the first number : ") ;
    scanf("%d",&a);

    printf("Enter the second number : ");
    scanf("%d",&b);

     r = a % b ; // remainder never comes into float data type
    
    printf("your reminder is :%d", r);
    return 0;
}