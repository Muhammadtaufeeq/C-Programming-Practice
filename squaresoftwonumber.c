#include<stdio.h>
 
int main()
{
    int x;
    printf("Enter a number \n");
    scanf("%d" , &x);

     int y = x * x;

    printf("squares of number that you gave is %d", y);

    return 0;
}