#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of rows : ");
    scanf("%d", &n);
    int nst = 1;
    for (int i = 1 ; i <= n; i++)
    {
        int nsp = n - i;
        int a =i-1;
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("%d", k);
        }
        for (int q = 1; q <= i-1; q++)
        {
            printf("%d", a);
            a = a - 1;
           // a-=1
        }
        nst = nst + 1;
        printf("\n");
    }
    return 0;
}