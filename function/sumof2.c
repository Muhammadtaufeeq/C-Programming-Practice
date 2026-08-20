#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int main()
{
    int a;
    printf("\nEnter the first number : ");
    scanf("%d", &a);
    int b;
    printf("\nEnter the second number : ");
    scanf("%d", &b);
    int sum =add(a,b); // int sum = a+b; 
    printf("the sum of two number is : %d",sum);
    
    return 0;
}