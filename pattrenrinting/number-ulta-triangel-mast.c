#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of rows : "); // let n =3 for the perfect clear output
    
    scanf("%d", &n);
    int nsp = 1;
    int nb = n;

    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("%d", i);  
    }
    printf("\n");
    for (int j = 1; j <= n; j++)
    {
        int a = 1;
        for (int k = 1; k <= nb; k++)
        {
            printf("%d", a);
            a++;
        }
        for (int q = 1; q <= nsp; q++)
        {
            printf(" ");
            a++;
        }
        for (int m = 1; m <= nb; m++)
        {
            printf("%d", a);
            a++;
        }
        nb--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}