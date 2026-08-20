#include<stdio.h>

int main(){
    int n;
    printf("Enter the number for cheaking the number is even or odd: ");
    scanf("%d", &n);

    if (n % 2 == 0) 
    printf("The Given number is Even");

    if (n % 2 != 0)
    printf("The Given number is Odd");
    
    return 0 ;
}