#include<stdio.h>
int main (){
    // Lower Charctor ASCII values
    printf("Charactor and their ASCII values");

    for(char ch = 'a' ; ch <= 'z' ; ch++){
        printf("\nCharactor: %c ASCII: %d" , ch ,ch);

    }
    return 0 ;
}