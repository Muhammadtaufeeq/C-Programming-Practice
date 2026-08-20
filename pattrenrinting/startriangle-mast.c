/*Expected output --> n = 4
  (*
  **
 ***
****)
*/
#include <stdio.h>
int main()
{
    printf("\n Wellcome in Star Triangle Mast\n");
    int n;
    printf("\nEnter number of Rows: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) // outer loop represent lines or rows
    {
        for(int k =1; k<= n-i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) // inner loop represents coulums
        {
            printf("*");
        }
        printf("\n");
    }
   return 0;
}