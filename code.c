#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    int sum, sub, div, mult;
    sum = a + b;
    sub = a - b;
    div = a / b;
    mult = a * b;

    printf("The value of %d + %d is %d \n ", a, b, sum);
    printf("The value of %d - %d is %d \n ", a, b, sub);
    printf("The value of %d / %d is %d \n ", a, b, div);
    printf("The value of %d * %d is %d \n ", a, b, mult);

    // another way
    printf("The value of %d + %d is %d \n ", a, b, a + b);
    printf("The value of %d - %d is %d \n ", a, b, a - b);
    printf("The value of %d / %d is %d \n ", a, b, a / b);
    printf("The value of %d * %d is %d \n ", a, b, a * b);
}