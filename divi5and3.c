#include<stdio.h>

int main(){
    printf("Wellcome this program cheak that the number is divisible by 3 and 5 ");

    int n; 
    printf("Enter any number : ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 3 ==0)
    printf("The Given Number Is Divisible By Both 5 And 3");

    if (n % 5 == 0 && n % 3 != 0)
    printf("The Given Number Is divisible By 5 but not 3");

    if ( n % 5 != 0 && n % 3 == 0)
    printf("The Given Number Is Divisible by 3 but not 5");

    if (n % 5 != 0 && n % 3 != 0)
    printf("The Given Number Is Not divisible by 3 and 5");

    return 0;
}

//  #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number : ");
//     scanf("%d", &a);

//     if (a % 5 == 0 && a % 3 == 0) 
//     {

//         printf("  The Given Number Is Divisible By Both 5 And 3 ");
//     }
//     if ( a % 5 == 0 && a % 3 != 0){

//         printf(" The Given Number Is Divisible By 5 Only ");

//     }
//     if ( a % 3 == 0 && a % 5!= 0 ){
         
//         printf("  The Given Number Is Divisible By 3 only");

        
//     }
//     if( a % 5!= 0 && a % 3!= 0 ){

//         printf(" The Given Number Is Not Divisible By 5 And 3 ");
//     }
//     return 0;
// }
