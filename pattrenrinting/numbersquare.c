// Expected output is 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5

// #include <stdio.h>
// int main()
// {
//     printf("\nWellcome to Number Square\n");
//     int n;
//     printf("Enter number of rows :");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) // this loop for generating rows
//     {

//       for (int j = 1; j <= n; j++) // this loop for generating colume
//       {
//         printf("%d ", j);
//       }
//         printf("\n");
//     }
//     return 0;
// }
//  Expected output is 
// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3
// 4 4 4 4 4 
// 5 5 5 5 5

#include<stdio.h>
int main(){
  int n;
  printf("welcome this program is written for printing the square number\n");

  printf("Enter the side of Square : ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= n; j++)
    {
      printf("%d ", i);
    }
    printf("\n");
  }
  return 0 ;
}