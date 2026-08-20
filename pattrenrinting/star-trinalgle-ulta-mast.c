#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of lines : ");
    scanf("%d", &n);
    int nsp = n;
    // int nst = n;
    for (int i = 1; i <= n; i++)
     {
        // for(int k =1; k<= n-i; k++)
        // {
        //     printf(" ");
        // }
        for (int j = 1; j <= (n+1)-i; j++)
        {
            printf("*");
        }
       
        printf("\n");
    }
    return 0;
}

//  for(int k =1; k<= n-i; k++)
//         {
//             printf(" ");
//         }