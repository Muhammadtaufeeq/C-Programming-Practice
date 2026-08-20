/*
Expected output 
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
*/

#include<stdio.h>

int main(){

    printf("Welcome to print number triangle\n");

    int a;
    printf("Enter the number of rows : ");
    scanf("%d", &a);

    
    for(int m = 1; m <= a; m++)
    {
        for(int n = 1; n <= m; n++)
        {
            
            printf("%d ", m);
        }
        printf("\n");
    }
    return 0 ;
}