#include<stdio.h>
int main(){

    int x;
    printf("Please Enter How Many Lines you want to like to form the shape : ");
    scanf("%d", &x);
    int b , a = 1;
    
    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= (x+1) - i; j++)
        {
            b = a + 64;
            char ch = (char)b;
            printf("%c ", ch);
        }
        a++;
        printf("\n");
        
    }
    return 0;
}
