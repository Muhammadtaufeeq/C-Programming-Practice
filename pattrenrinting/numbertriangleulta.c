#include <stdio.h>
int main()
{
    printf("\nWelcome in number triangle ulta\n");
    int n;
    printf("Enter the rows for Ulta Number-Triangle : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int a = (n+1)-i;
        for (int j = 1; j <= a; j++)
        {  
            printf("%d ",j); 
        }
        printf("\n");
    }
    return 0;
}