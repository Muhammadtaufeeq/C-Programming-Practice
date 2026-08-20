#include<stdio.h>
int main(){
    for ( int i =1; i <=100; i++){
        printf("\n%d", i);
        if(i==50) break;
    }
    return 0;
}