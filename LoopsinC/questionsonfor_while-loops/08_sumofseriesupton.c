#include<stdio.h>
int main (){
int n ; 
printf("Enter the series for nth term : ");
scanf("%d" , &n);
int sum = 0 ;
for(int i = 1 ; i <=n ; i++)
{ // 1 - 2 + 3 - 4 + 5 - 6 + 7 ....upto n
    if(i%2!=0){sum = sum + i;}
    else{sum = sum - i;}
}   
    printf("The sum Of Given Series is : %d" , sum);    
    return 0 ;
}
