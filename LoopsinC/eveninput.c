#include<stdio.h>
int main (){
    int m ;
    printf("Enter a Number : ");
    scanf("%d" , &m);

  for (int i = 1 ; i<= m ; i++){
        if( i %2 !=0){
            continue;

        }
        printf("%d\t" , i);
  }
return 0 ;
}