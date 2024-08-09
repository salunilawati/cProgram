#include <stdio.h>

int main()
{

    // WAP to add 2 numbers using following datatypes:
    // int, short int, unsigned int, long int, float, double, long double

    unsigned int e, f;

    printf("Enter two numbers: \n");
    scanf("%u %u", &e, &f);
    unsigned int sum = e + f;
    printf("The sum of the numbers is: %u\n", sum);

    return 0;
}