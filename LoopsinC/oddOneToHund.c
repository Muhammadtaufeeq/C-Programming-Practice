// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 3 == 0)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    for(int x = 1 ; x <= 100; x = x + 2){
        printf("\t%d", x);
    }
    return 0;
}

