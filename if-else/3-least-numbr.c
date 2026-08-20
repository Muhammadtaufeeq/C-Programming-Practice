#include<stdio.h>
int main (){

    int x , y , z ; // all number should be distinct ..

    printf("Enter the first number : ");
    scanf("%d", &x);

    printf("Enter the second number : ");
    scanf("%d", &y ) ;

    printf("enter the third number : ");
    scanf("%d" , &z);

    if ( x < y && x < z )
    printf("The first number is smallest !!");

    if ( y < x && y < z)
    printf("The second number is smallest!!");

    if (z < x && z < y)
    printf("The third Number is smallest!!");

    return 0;
}