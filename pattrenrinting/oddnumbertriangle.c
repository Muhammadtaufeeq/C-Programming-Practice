/*
Expected Output is -->  n = 4
1
1 3
1 3 5
1 3 5 7
*/
#include <stdio.h>
int main()
{
    printf("\nWelcome to Odd Number triangle for pattern program\n");
    int n;
    printf("\nEnter the number of rows that you want to print: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }
return 0;
}