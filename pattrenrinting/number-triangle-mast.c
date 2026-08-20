/*
Expected output --> n = 5
        1 
      1 2 
    1 2 3 
  1 2 3 4
*/
#include<stdio.h>
int main()
{
    int b;
    printf("Enter the Number of rows : ");
    scanf("%d", &b);

    for(int p =1 ; p<= b; p++)
    {
        for(int q = 1; q <= b - p; q++)
    {
        printf("  ");
    }
        for(int r = 1; r<= p; r++)
    {
        printf("%d ",r);
    }
    printf("\n");
    }
    return 0;
}