#include <stdio.h>
int main()
{

    printf("Charactor and their ASCII value");

    for (char ch = 'A'; ch <= 'Z'; ch++)
    {

        printf("\nCharactor: %c ASCII: %d", ch, ch);
    }

    return 0;
}