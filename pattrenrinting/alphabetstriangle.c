/**/


#include<stdio.h>
int main()
{
    printf("\nWellcome to printf a alphabates triangle\n");
    int n; 
    printf("Enter the value of rows : ");
    scanf("%d",&n);

for(int i = 1;i<=n;i++)
    {
        int a=1;
        //int d = (n+1)-i;
        for(int j=1;j<=i;j++){
           // int b = a+64;
            char ch = (char)(a+64);
            printf("%c ",ch);
            a++;        
        }
        printf("\n");
    }
    return 0;
}