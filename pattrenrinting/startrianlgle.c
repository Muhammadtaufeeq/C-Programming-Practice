#include<stdio.h>
int main(){
    printf("Welcome! lets come and make mast-mast triangle\n");

    int n ;
    printf("Enter the number of rows of triangle : ");
    scanf("%d", &n);

    int i , j;
    for( i = 1; i <= n; i++)
    {
        for( j = 1 ; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}