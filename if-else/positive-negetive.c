#include<stdio.h>
int main (){
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);

    if (a==0) 
    printf("The given number is Zero");

    if (a<0) 
    printf("The Given Number is Negetive");
    
    if(a>0) 
    printf("the Given Number Is Positive");

    return 0 ;
}