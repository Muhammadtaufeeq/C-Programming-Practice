 #include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter The First Number : ");
    scanf("%d", &a);

    printf("Enter The second Number : ");
    scanf("%d", &b);

    printf("Enter The Third Number : ");
    scanf("%d", &c);

    if (a > b)
    { //  b is out of race
        if (a > c)
        {
            printf(" %d is greatest " , a);
        }
        else
        { // c > a
            printf("%d is greatest", c);
        }
    }
    else
    { // b>a
        if (b > c)
        {
            printf(" %d is greatest", b);
        }
        else
        { // c>b
            printf("%d is greatest", c);
        }
    }

    return 0;
}