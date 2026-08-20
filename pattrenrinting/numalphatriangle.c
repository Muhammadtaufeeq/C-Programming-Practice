// Expected output --> 




#include<stdio.h>
int main(){
    printf("welcome this is the program is to print number alphabates triangle normal\n");

    int x;
    printf("How many lines you wnna to print : ");
    scanf("%d", &x);
    int a , b;
    
    for(int i = 1; i <=x; i++)
    {
        for(int j =1; j <= i; j++)
        {
            if(i % 2 == 0)
            {
                b = j + 64;
                char ch = (char)b;
                printf("%c ",ch);
            }
            else
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }

    return 0;
}


// #include <stdio.h>

// int main()
// {
//     printf("\nWelcome to Alpha-Num Triangle\n");
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;     // number counter
//        //char ch = 'A'; // letter counter

//        //int d=(n+1)-i;
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % 2 == 0)
//             {
//                 // even line → print alphabets
//               int b = j+64;
//               char ch = (char)b;
//               printf("%c ",ch);
//               //ch++;
//             }
//             else
//             {
//                 // odd line → print numbers (1, 2, 3,...)
//                 printf("%d ", a);
//                 a=a+1;
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }
