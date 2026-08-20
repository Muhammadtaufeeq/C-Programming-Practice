#include<stdio.h>
int main(){
    int n;
    printf("Enter number ot find factorial till it : ");
    scanf("%d", &n);

    int factorial = 1;
    for( int i =1 ; i<=n ;i++){
        factorial = factorial * i;
        printf("The factorial of %d is : %d\n" ,i ,factorial);
    }
    return 0;
}