#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter two numbers: \n");
    scanf("%f %f", &a, &b);

    float sum;
    sum = a + b;

    printf("The sum of your two numbers %f + %f is: %f", a, b, sum);

    return 0;
}