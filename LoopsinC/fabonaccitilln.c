#include <stdio.h>
int main()
{
    printf("\n The Fibonacci series as a sequence of numbers\n");
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int a = 1;
    int b = 1;
    int sum = 1;

    for (int i = 0; i <= n; i++)
    {

        if(i==0)
        {
            sum = 0;
            printf("The %dth fabonacci number is : %d\n", i, sum);
        }
       else if (i <= 2)
        {
            sum = 1;
            printf("The %dth fabonacci number is : %d\n", i, sum);
        }
        else
        {
            sum = a + b;
            a = b;
            b = sum;
            printf("The %dth fabonacci number is : %d\n", i, sum);
        }
    }
    return 0;
}