#include <stdio.h>
int main()
{
    int m;
    printf("Enter the percentage % :  ");
    scanf("%d", &m);

    // 91 - 100 -> Excellent
    // 81 - 90 -> very good
    // 71 - 80 -> good
    // 61 - 70 -> can do better
    // 51 - 60 -> average
    // 41 - 50 -> below average
    // marks <  40 -> fail

    if (m >= 91)
    {
        printf("Excellent");
    }
    else if (m >= 81)
    {
        printf("very good");
    }
    else if (m >= 71)
    {
        printf("good");
    }
    else if (m >= 61)
    {
        printf("can do better");
    }
    else if (m >= 51)
    {
        printf("average");
    }
    else if (m >= 41)
    {
        printf("below the average");
    }
    else
    {
        printf("fail");
    }
    return 0;
}