#include<stdio.h>
int main(){
    printf("This program is for Star Triangle Ulta\n");

    int n;
    printf("Enter the number of rows for printing the triangle ulta : ");
    scanf("%d",&n );

    int i , j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= (n+1)-i; j++)
        {
            printf("* ");
            // p=p+1;
        }
        printf("\n");
    }
        return 0 ;
    }
