#include<stdio.h>
int main(){
   int n ;
   printf("Enter the number : ");
   scanf("%d", &n);

   if( n % 5 == 0)
   printf("The Given Number is Divisible By 5 ");
   
   else // if ( n % 5 != 0 )
   printf("The Given nUmber is Not Divisible By 5");

   return 0 ;
}