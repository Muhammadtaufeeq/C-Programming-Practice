// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the number to count and sum : ");
//     scanf("%d", &x);

//     int ld = 0, sum =0, count = 0;

//     while(x > 0){
//         ld = x % 10;
//         sum = ld + sum;
//         x = x / 10;
//         count++;
//     }
//     printf("There are %d digits in given number\n", count);
//     printf("And the sum of all digits is : %d", sum);

//     return 0 ;
// }

// product of all the digits 

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int lastdigit = 1;
    int pd = 1;
    int count = 0;
    while (n != 0)  // n > 0
    {
        lastdigit = n % 10;
        pd = pd * lastdigit;
        n = n / 10;
        count++;
    }
    
    printf("The total digits in ginven number is : %d ", count);
    printf("\nthe product of all digits in given number is : %d ", pd);

    return 0 ;
}