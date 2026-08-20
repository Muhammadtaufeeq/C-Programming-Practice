#include<stdio.h>
int main()
{
    int z;
    printf(" Enter an Integer number : ");
    scanf("%d" , &z);

    if(z<0){
        z = z * (-1);

    }
    
    printf(" This is your absolute value of that integer that you gave  :  %d ",z );
    
    return 0;                              
}
