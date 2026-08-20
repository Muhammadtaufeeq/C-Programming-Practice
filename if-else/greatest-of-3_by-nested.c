#include<stdio.h>

int main(){

    int x , y , z;
    printf("Enter The First Number : ");
    scanf("%d", &x);

    printf("Enter The Second Number : ");
    scanf("%d" , &y);

    printf("Enter The Third Number : ");
    scanf("%d", &z);

    if(x > y) {
        if(x > z) printf("The First number %d is gratest", x);
        else printf("The Third number %d is gratest", z);
    }
    else { // y > x
        if (y > z) printf("The Second number %d is greatest ", y);
        else // z > y 
        printf("The Third Number %d is greatest ",z);
    }

    return 0;
}