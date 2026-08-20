#include <stdio.h>
int main()
{
    char OP;
    float a, b;
    printf("Enter the valuer of a : ");
    scanf("%f", &a);
    printf("Enter the oprater  :  ");
    scanf("%c", &OP);
    printf("Enter the value of b : ");
    scanf("%f", &b);
    
     float R;

    if (OP == '+')
    {
        R = a + b;
        printf("Result = %.f", R);
    }
    else if (OP == '-')
    {
        printf("Result = %.2f", a - b);
    }
    else if (OP == '*')
    {
        printf("Result = %.2f", a * b);
    }
    else if (OP = '/')
    {
        printf("Result = %.2f", a / b);
    }
    else
    {
        printf("Invalid Oprater");
    }

    return 0;
}