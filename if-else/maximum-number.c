#include<stdio.h>
int main(){

    int a , b ;

    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    if (b < a)
    printf("The First number is Bigger");

    if(a < b)
    printf("The Second Number is bigger");

    if (a == b)
    printf("Both Numbers Look Equal!!");

    return 0 ;
}