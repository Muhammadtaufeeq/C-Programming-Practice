#include<stdio.h>
int main (){

    int n ; // long digit numbers
    printf("Enter the number : ");
    scanf("%d", &n);

    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    printf("Upper Number Is %d digits Number",count);    
    return 0;
}