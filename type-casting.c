#include<stdio.h>
int main(){
    float x ;
    printf("Enter a decimal number : ");
    scanf("%f" ,&x);

    int y = (int)x;
     
    
    printf("Half of the number that given by you is : %d" , y/2);

    return 0 ;
}
