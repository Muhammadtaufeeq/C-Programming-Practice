#include <stdio.h>
int main()
{

    printf("\nWelcome to print Hollow-Rectangle\n");

    int n,m ; // n= number of rows,m= number of coloms
    printf("\nEnter nmber of rows : ");
    scanf("%d", &n);
    printf("\nEnter the number of coloms : ");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == m || j==1)
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