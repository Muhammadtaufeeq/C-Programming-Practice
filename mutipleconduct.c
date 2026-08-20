#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number : ");
    scanf("%d" , &n);

    if(n>99 && n<1000)
    {
        printf("\nThe Given Number Is Three Digits Number");

    }
    if(n>9 && n <99){
         
        printf(" \nThe Given Number Is Two Digits Number ");
    }
    if( n < 9 ){

        printf(" \nThe Given Number Is ONE Digit Number");
    }
   
    return 0;

}