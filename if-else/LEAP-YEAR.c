#include<stdio.h>

int main(){

    printf("\nWellcome !! This Is The Program To cheak The Year Is Leap Or Not.\n\n");
    int year;

    printf("\nPlease! Enter The Year : ");
    scanf("%d",&year);

    if (year % 400 == 0 && (year % 4 == 0 || year % 100 != 0 ))
    printf("\nThis Year Is A Leap Year!!\n\n");

    else
    printf("\nThis Year Is NOt A Leap Year!!\n\n");

    return 0 ;
}