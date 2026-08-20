#include<stdio.h>
int main(){
     
    float n ;
    printf("Enter a Real Number : ");
    scanf("%f", &n);

    int m = (int)n;

    if (n - m == 0 ) 
    printf("The Number was an integer");

    if (n - m > 0)
    printf("the number was not an integer");

    return 0 ;
}