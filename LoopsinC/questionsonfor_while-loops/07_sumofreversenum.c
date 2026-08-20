#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number to find the sum of itself and its reverse : ");
    scanf("%d", &n);
    int r = 0;
    int sum = 0;
    int m = n + 0;
    while (m > 0)
    {
        sum = m % 10;
        r = r * 10;
        r = sum + r;
        m = m / 10;
    }
    int ADDITION = r + n;
    printf("The reverse of the given number is : %d\n", r);
    printf("The Given Number is : %d\n", n);
    printf("The Addition Of The Given Number And reverse Number is : %d\n", ADDITION);

    return 0;
}