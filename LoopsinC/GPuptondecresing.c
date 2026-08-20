#include<stdio.h>
int main(){
    int n ;
    printf("Enter the nth term : ");
    scanf("%d" , &n);

    float a = 100.0;
    for(int  i = 1 ; i<=n ; i++){
        printf("%2lf " , a);
        a = a /2;
    }
    return 0 ;

}