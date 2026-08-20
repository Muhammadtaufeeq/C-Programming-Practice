#include<stdio.h>
int main(){
    void india();
    india(); // calling india 1
   return  0;
}
void india()
{
    printf("\nYes, you are in India");
    void england();
    england();
    return ;    
}
void australia(){
    printf("\nYes, you are in Australia");
    return ;
}
void england(){
    printf("\nYes, you are in England");
    void australia();
    australia();
    return ;
}