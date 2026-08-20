#include<stdio.h>
int main ()
{
    int cp;
    printf("Enter the value of cp : ");
    scanf("%d", &cp);
    int sp;
    printf("Enter the value of sp : ");
    scanf("%d", &sp);
    if (cp < sp)
    {
        printf(" profit");
    }
    else if (sp < cp)
        printf("Loss");

    else
        printf("neither profit nor loss");

    return 0;
}