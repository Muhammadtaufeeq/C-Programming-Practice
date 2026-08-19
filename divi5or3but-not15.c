#include<stdio.h>
int main (){

    int x;
    printf("Enter The Number : ");
    scanf("%d", &x);

    if ( x % 15 != 0)
     if ( x % 5 == 0 || x % 3 == 0)
     printf("\nThe Given Number is can be divided by Either 5 or 3 but not 15");

     else printf("Invalid.. the given number also divisible by 15d");

    else printf("invalid...the number divisible by 15");

    return 0 ;
}