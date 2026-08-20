#include <stdio.h>
int main()
{
    int RAFI, TAQI, SHAFI;
    printf("Enter the Age of RAFI : ");
    scanf("%d", &RAFI);

    printf("Enter the Age of SHAFI : ");
    scanf("%d", &SHAFI);

    printf("Enter the Age of TAQI : ");
    scanf("%d", &TAQI);
    if (RAFI < TAQI)
    { // TAQI is out of race
        if (RAFI < SHAFI)
        {
            printf(" RAFI is younger", RAFI);
        }
        else
        { // SHAFI < RAFI
            printf(" SHAFI is younger ", SHAFI);
        }
    }
    else
    { // TAQI  < RAFI
        if (TAQI < SHAFI)
        {
            printf(" TAQI is younger", TAQI);
        }
        else
        { // SHAFI < TAQI

            printf(" SHAFI is younger ", SHAFI);
        }
    }
    return 0;
}