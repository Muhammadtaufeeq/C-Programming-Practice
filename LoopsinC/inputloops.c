#include<stdio.h>
int main(){
    int n;
    printf("Enter the value  :" );
    scanf("%d" , &n);
    int i;
    for( i=1;i<=n;i=i+3){
        printf("Hey! How Are You\n ");
    }
    printf("%d" , i);

    return 0 ;

}