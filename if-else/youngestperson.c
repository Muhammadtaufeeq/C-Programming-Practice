#include <stdio.h>
int main()
{
    int a;
    printf("Enter the age of Adil: ");
    scanf("%d", &a);

    int b;
    printf("Enter the age of Ahmad : ");
    scanf("%d", &b);

    int c;
    printf("Enter the age of bittu : ");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        printf(" Adil is younger then Ahmad and bittu");
    }
    if (b < c && b < a)
    {
        printf("Ahmad is younger then Adil and bittu");
    }
    if (c < a && c < b)
    {
        printf("bittu is greater then Adil and Ahmad");
    }
    return 0;
}
