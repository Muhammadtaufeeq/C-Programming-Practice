#include<stdio.h>
int main (){
    printf("This Is te program only for the cheaking three digits numbers\n\n");
    int a ;
    printf("Enter the 3 digits number : ");
    scanf("%d", &a);

    if ( a >= 100 && a <= 999)
    printf( " yes !! this number is three digits number ");

    else 
    printf("Nohh!! this is not your three digits number ");
 

    return 0 ;

}