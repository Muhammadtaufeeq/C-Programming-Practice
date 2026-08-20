#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of stars : ");
    scanf("%d", &n);
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        int b = n - i;
        for (int k = 1; k <= b; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}