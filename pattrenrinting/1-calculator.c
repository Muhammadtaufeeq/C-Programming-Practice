#include <stdio.h>
#include <math.h>
int main()
{
    printf("\nWelcome to our C calculator \n");
    int n, m, y;
    char a = '+';
    char b = '-';
    char c = '/';
    char d = '*';
    char x;
    printf("Enter the first number : ");
    scanf("%d", &n);
    printf("Enter the second number : ");
    scanf("%d", &m);
    printf("\nEnter the oprator : ");
    scanf(" %c", &x);

    if (x == a)
    {
        y = n + m;
        printf("The Addition of the two Number is : %d", y);
    }
    else if (x == b)
    {
        y = n - m;
        printf("The subtraction of the two number is : %d", y);
    }
    else if (x == c)
    {
        y = n / m;
        printf("The dividation of these number is : %d", y);
    }
    else if (x == d)
    {
        y = n * m;
        printf("The Multiplication of these Number is : %d", y);
    }
    else
    {
        printf("Unknown Oprator");
    }

    return 0;
}