#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int even = 0;
    int sum = 0;
    int count = 0;

    while (n > 0) // if it should be true
    {
        even = n % 10;
        n = n / 10;
        count++;
        if (even % 2 == 0)
        {
            sum = sum + even;
        }
    }
    printf("Sum of all even digits in is : %d\n" , sum);
    printf("The total digits in given number is :%d\n" , count);

    return 0;
}