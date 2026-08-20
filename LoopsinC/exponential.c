#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("\nThe Exponential function as a'b\n");
    printf("\nEnter the base value as a : ");
    scanf("%d", &a);
    printf("\nEnter the exponential value of b  : ");
    scanf("%d",&b);
    int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
        
    }
    printf("%d raise to the power %d is : %d\n", a, b, power);

    return 0;
}