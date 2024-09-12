// Write a program in C to add, subtract, multiply and divide 2 numbers. Take input from the user
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter  numbers: ");
    scanf("%d ",a);
    printf("Enter two numbers: ");
    scanf("%d ", b);
    int add = a + b, sub = a - b, mul = a * b, div = a / b;
    printf("Addition: %d\n",&add);
    printf("Subtraction: %d\n",&sub);
    printf("Multiply: %d\n",&mul );
    printf("Divide: %d\n",&div );

    return 0;
}