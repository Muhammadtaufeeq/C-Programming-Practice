#include<stdio.h>
int main (){

    int a , b; // a > b
    printf(" Enter the value of a :");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d" , &b);

    int q = a/b;
    int r = a - (b * q); //divident = divisor * quotient + reminder

    printf(" The reminder  , when %d is divided by %d  is : %d", a , b , r  );

    return 0;
}