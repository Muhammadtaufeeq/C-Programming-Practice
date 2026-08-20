
#include <stdio.h>
int main()
{
    printf("\nWellcome to print Alphabets square\n");
    int n;
    printf("Enter the Number of rows : ");
    scanf("%d", &n);
    int a =1;

    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= n; j++)
        {
            int b=a+64;
            char ch = (char)b;
            printf("%c ",ch);
            // a=a+1;// a++; both are aplicable for that clear purpose 
        }
        printf("\n");
        a=a+1;
    }
    return 0;
}