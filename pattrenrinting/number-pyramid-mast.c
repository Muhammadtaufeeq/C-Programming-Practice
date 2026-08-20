/*
Expected output --> 

          1 
        1 2 3 
      1 2 3 4 5 
    1 2 3 4 5 6 7 
  1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 9 10 11
*/
#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of rows : ");
    scanf("%d",&n);
    int nsp;  //nst = 1
    for (int i = 1; i <= n; i++)
    {
        nsp = n - i;
        for (int j = 1; j <= nsp; j++)
        {
            printf("  ");
        }
        int b=2*i-1; // nst = nst + 2;
        for (int k = 1; k <= b; k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}