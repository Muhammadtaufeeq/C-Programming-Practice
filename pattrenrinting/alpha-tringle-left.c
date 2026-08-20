 /* Expected output --> n = 6  
          A 
        A B 
      A B C 
    A B C D 
  A B C D E 
A B C D E F
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;

        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            int x = 64 + a;
            char ch = (char)x;
            printf("%c ", ch);
            a++;
        } 
        printf("\n");
    }
    return 0;
}