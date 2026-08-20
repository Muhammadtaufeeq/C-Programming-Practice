#include<stdio.h>
int main ()
{
    int a ;
    int b ; 
    printf("Exponential function as a'b\n ");

    printf("\nEnter the base value of a : ");
    scanf("%d" , &a);

    printf("\nEnter the power of a as b : ");
    scanf("%d" , &b);

    int powergrow = 1;
    for(int i = 1 ; i<=b ; i++){
        powergrow = powergrow * a;
        printf("\n%d raise to the power %d is : %d" , a , i , powergrow);

    }

    return 0 ;

}