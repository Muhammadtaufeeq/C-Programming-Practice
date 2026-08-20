#include <stdio.h>
void arabia() //(8)
{
    printf("You are in arabia\n"); //(9)
    return;                        // (10)
}
void australia() // (5)
{
    printf("You are in australia\n"); // (6)
    arabia();                         // (7)
    return;                           // (11)
}
void india() // (2)
{
    printf("You are in india\n"); //(3)
    australia();                  //(4)
    return;                       // (12)
}
int main()
{
    india();  // calling india function // (1)
    return 0; // (13)
}