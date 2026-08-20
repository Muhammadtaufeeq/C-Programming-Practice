#include<stdio.h>
int main(){
   int n;
   printf("Enter a number : ");
   scanf("%d", &n);
   
   for(int i=1 ; i<=n; i++)// outer loop decides -> no of lines
   {
    for(int j=1; j<=5; j++)// inner loop decides -> on of stars in each line
    {
        printf("* ");
    }
    printf("\n");
   }
       return 0;
}   
  