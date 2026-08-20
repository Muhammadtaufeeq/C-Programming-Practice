/*
A B C D E F G
A B C D E F 
A B C D E 
A B C D 
A B C 
A B 
A
*/

#include<stdio.h>
int main()
{ 
    int n ;
    printf("How Many Liness You Want To print For The Given Pattern : ");
    scanf("%d", &n);
    
    for(int i= 1; i<=n; i++)
    {
        int a;
        for(int j = 1 ; j <= (n+1)-i; j++)
        {
            a = j+64;
            char ch = (char)a;
            printf("%c ", ch);

        }
        printf("\n");
    }
return 0;
}