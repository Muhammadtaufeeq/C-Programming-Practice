#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number : ");
    scanf("%d", &n);

    int hf = 1;

    for(int i =2 ; i <= n/2; i++){
        if(n%i != 0){
            printf("this is prime number");
            break;
        }
        else{
            printf("this is composite number");
            break;
        }

    }
    return 0 ;
}