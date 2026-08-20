#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d" , &n);
   //ternary oprater 
   // expression 1 ? expression 2 : expression 3 ;
   // unused only for represent code as cool 
   n%2==0 ? printf("it is an even number ") : printf("it is an odd number"); 

   return 0 ;
}  
