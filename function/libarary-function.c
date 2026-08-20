#include<stdio.h>
#include<math.h>

int main(){
    // float root = sqrt(24);
    // printf("%f", root);
    // float cb = cbrt(27);
    // printf("cube root is : %f", cb);

    int a;
    printf("Enter the base value : ");
    scanf("%d", &a);

    int b;
    printf("Enter the power value : ");
    scanf("%d",&b);

    int p = pow(a,b);
    printf("%d raised to the power %d is : %d", a , b, p);

    return 0;
}