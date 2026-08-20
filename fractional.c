#include<stdio.h>
int main (){
  
    float a;
    printf("Enter the decimal number for find its fraction part : ");
    scanf("%f" , &a);

    int b = a ;
    float f = a - b ;
     
    printf(" The fractional part of the real number is  : %f" , f);
    

    return 0 ;

}