#include <stdio.h>
int main()
{
    printf("\nWelcome to print star-plus\n");
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a = n / 2 + 1;
            if (i == a || j == a)
            {
                printf("*");  
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}