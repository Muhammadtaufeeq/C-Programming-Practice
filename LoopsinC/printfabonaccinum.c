#include<stdio.h>

int main (){
    int n ; 
    printf("Enter a number : ");
    scanf("%d" ,&n);

    // for find fabonacci number we design two boxes 'a' and 'b' and another one 'sum' 
    //  the assition of a and b assign in sum and b's value in a , sum's value in b.then again loop

    int a = 1;
    int b = 1;
    int sum = 1;
    for(int i = 1 ; i<=n-2 ;i++)
    {
        sum = a+ b;
        a = b;
        b = sum;
    }
    printf("The %dth fabonacci is : %d" , n , sum);
    return 0 ;
}