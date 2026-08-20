#include<stdio.h>
int main ()
{
    int x , y ;
    printf("Enter the x  coordinates :  ");
    scanf("%d", &x);
    printf("Enter the y coordinates :   ");
    scanf("%d" , &y);
     
    if (x==0 && y==0){
        printf("points are on origin");
    }
    else if(x==0){
        printf("points lies on y axis");

    }
    else if (y==0) {
        printf("points lies on x axis");  
    }
    else {
        printf("the points does not lies on x and y axis but may be make a line ");
    }
    return 0;  
}

