/*
Expected output --> n = 6
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
* * * * * * * * * * * 
*/
#include <stdio.h>
int main()
{ 
    int n;
    printf("\nEnter the number of stars : ");
    scanf("%d", &n);
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        // int b = n - i;
        for (int k = 1; k <= n - i; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("* ");
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {   printf("Welcome! this the program for make a eualateral triangle\n");
//     int n;
//     printf("Enter the number of rows : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) // the work of this loop ois to print rows
//     {
//         for (int j = 1; j <= n - i; j++) // the work of this loop is to print coloum
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }