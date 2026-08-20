#include<stdio.h>
int main (){
    int a , b , c;

    printf("Enter first Side of Triangle : ");
    scanf("%d", &a);

    printf("Enter the Second side of Traingle : ");
    scanf("%d", &b);

    printf("Enter the third side of triangle : ");
    scanf("%d", &c);

    if ((a + b ) > c && (a + c) > b && (b + c ) > a)
    printf("It Is Valid Trisngle...congrats");

    else 
    printf("It Is Invalid triangle ...sorry");

    return 0 ;
}