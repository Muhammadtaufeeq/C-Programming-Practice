#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of lines : ");
    scanf("%d", &n);
    int nsp = 1;
    int nst = n;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int j = 1; j <= n; j++)
    {

        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        for (int q = 1; q <= nsp; q++)
        {
            printf(" ");
        }
        for(int m=1;m<=nst;m++){
            printf("*");
        }
        nsp+=2;
        nst--;
        printf("\n");
        
    }
   
    return 0;
}