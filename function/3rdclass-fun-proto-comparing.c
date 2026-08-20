#include <stdio.h>
int getmax(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int x = 10, y = 20;
    printf("\nbiggest number is :%d\n", getmax(x, y));

    return 0;
}