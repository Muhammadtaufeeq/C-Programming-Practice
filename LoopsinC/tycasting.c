#include<stdio.h>
int main (){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    char ch =(char)n;
    printf("\n%c %d" , ch, n);
    return 0 ;
}


// /*int main(){
//     char ch = 'W';
//     printf("\n%c" , ch);

//     int x = (int)ch;
//     printf("\n%d" , x);
//     return 0 ;
// }*/