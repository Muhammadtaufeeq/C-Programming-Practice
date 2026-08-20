#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d" , n);
    int odd = 0;
    int sum = 0;
    int count = 0;
    while (n > 0)
    {
        odd = n % 10;
        n = n / 10;
        count++;
        if (odd % 2 != 0)
        {
            sum = sum + odd;
        }
    }
    printf("Sum of all ODD digits in given number is : %d\n", sum);
    printf("The Number Of Digits present in given number is : %d\n", count);

    return 0;
}