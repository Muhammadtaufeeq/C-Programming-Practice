#include<stdio.h>
int main()
{
    int n;
    printf("Enter any year :");
    scanf("%d" , &n);

    if(n%4==0){
    printf(" The year is Leap year ");
  }
  else{
    printf(" The year is not a Leap year");
  }
    return 0;

}