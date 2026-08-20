#include<stdio.h>

void getmini(int x, int y){
    if(x<y) printf("%d is smaller \n", x);
    else printf("%d is smaller\n");
    return ;
}
int main(){
    int a , b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    getmini(a,b);
    return 0;
}