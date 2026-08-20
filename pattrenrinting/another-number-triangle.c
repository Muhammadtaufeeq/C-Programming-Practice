/*Expected ooutput --> 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5*/
#include<stdio.h>
int main(){

printf("Welcome to print An Another Type Of Number Triangle \n");

int n;
printf("Enter the number of rows that you want : ");
scanf("%d", &n);


for(int i = 1; i <= n ; i++){
    int a = 1;
    for(int j = 1; j<= i; j++){
        printf("%d", a);
        a++;
    }
    printf("\n");
}
    return 0;
}