#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int r = 0;
    int sum = 1;

    while (n > 0)
    {
        sum = n % 10;
        r = r * 10;
        r = sum + r;
        n = n / 10;
    }
    printf("Finally, The reverse of the given number is : %d", r);

    return 0;
}