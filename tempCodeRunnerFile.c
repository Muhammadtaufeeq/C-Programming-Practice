#include<stdio.h>
int main(){
    int a;
    printf("\nEnter the number for printing the rows number : ");
    scanf("%d",&a);

    for(int i=1;i<=a;i++){

        int b = i ;

        for(int j=1;j<=b; j++) 
        {  
            printf("%d",j); 
        }
        printf("\n");
    } 
    return 0;
}