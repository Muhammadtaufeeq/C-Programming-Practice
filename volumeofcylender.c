#include<stdio.h>
int main()
{
    float Volume , pi , h , r ;

    printf("Enter the Radius of Cylender : ");
    scanf("%f, &r");

    printf("Enter the height of Cylender : ");
    scanf("%f", &h);

    pi = 3.14;

    Volume = pi * r * r * h;

    printf("The Volume of the Cylender is : %f", Volume);

    return 0 ;

}