#include <stdio.h>
int main()
{
    // All Inputs Should Be distinct....
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    int b;
    printf("Enter the value of b : ");
    scanf("%d", &b);

    int c;
    printf("Enter the value of c : ");
    scanf("%d", &c);

    if (a > b && a >  c)// 
    {
        printf(" a is greater then b and c ");
    }
    if (b > a && b > c)
    {
        printf(" b is greater then  a and c ");
    }
    if (c > b && c > a)
    {
        printf(" c is greater then b and a ");
    }

    return 0;
}