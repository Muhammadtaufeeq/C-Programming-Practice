#include<stdio.h>
int main(){
    
    int m , n ;
    printf("Enter, How Many Rows You wanna to print : ");
    scanf("%d",&m );
    printf("Enter, How Many Colums U wanna to Print : ");
    scanf("%d" , &n);

    
    for(int i = 1; i <= m; i++){
        for(int j = 1 ; j <= n; j++){
            printf("@ ");

        }
        printf("\n");
    }
    
    return 0;
}