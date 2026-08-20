#include<stdio.h>
int main (){
    int n ; 
    printf("Enter The Nth Number Of series : ");
    scanf("%d", &n );

    int sum =0 ; 
    if(n%2==0){
        sum = -n/2;

    }
    else{
        sum = -n/2 + n;
    }
    printf("The Sum Of Series Is : %d" , sum);
    return 0 ; 
}