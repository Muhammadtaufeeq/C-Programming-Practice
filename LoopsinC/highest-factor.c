// #include<stdio.h>
// int main(){
//     int n ;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     int hf =1;
//     for(int i = 1; i <= n-1; i++){
//         if(n % i == 0){
//             hf = i;
//         }
//            }
//             printf("the highst factor of the number %d is : %d", n , hf);

//     return 0;
// }

#include<stdio.h>
int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int hf  = 1;
    for(int i = n/2; i > 1; i--)
    {
        if(n % i ==0)
        {
            hf = i;
            printf("Your Highest Factor Of The Number %d Is : %d\n", n, hf);
            // break;
            // printf("Your Highest Factor Of The Number %d Is : %d", n, hf);
        }
    }

    // printf("Your Highest Factor Of The Number %d Is : %d", n, hf);

    return 0;
}