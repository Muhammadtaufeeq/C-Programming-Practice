#include<stdio.h>
int main(){
    int p ;
    printf("Enter the number of rows : ");
    scanf("%d",&p);

    for(int a = 1; a <= p; a++)
    {
        for(int b = 1; b <= a - p; b++)
        {
            printf("  ");
        }
        for(int c = 1; c <= a ; c++)
        {
            if(a%2==0)
            {
                printf("%d", a);
            }
        }
    }
    return 0;
}