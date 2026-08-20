#include<stdio.h>

void OddEven(int x){
        if(x%2==0) printf("Even Number");
        else printf("Odd Number");
        return ;
    }

int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    OddEven(a); // function call
    return 0;
}