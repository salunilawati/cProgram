#include <stdio.h>

int main()
{

    short int c, d;

    printf("Enter two numbers: \n");
    scanf("%hd %hd", &c, &d);
    short int sum2 = c + d;
    printf("The sum of the numbers is: %hd\n", sum2);

    return 0;

}