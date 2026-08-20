#include <stdio.h>

int main() {
    char ch;

    // Uppercase letters
    printf("Uppercase Alphabets and their ASCII values:\n");
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("Character: %c, ASCII: %d\n", ch, ch);
    }

    // Lowercase letters
    printf("\nLowercase Alphabets and their ASCII values:\n");
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("Character: %c, ASCII: %d\n", ch, ch);
    }

    return 0;
}
