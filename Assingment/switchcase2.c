#include <stdio.h>

int main()
{
    int a, b;
    int operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter 5 for modulus\n");

    printf("Enter your choice: ");
    scanf("%d", &operator);

    switch (operator)
    {
    case 1:
        printf("The sum of %d and %d is %d\n", a, b, a + b);
        break;
    case 2:
        printf("The difference between %d and %d is %d\n", a, b, a - b);
        break;
    case 3:
        printf("The product of %d and %d is %d\n", a, b, a * b);
        break;
    case 4:
        // Avoid division by zero by handling zero denominator directly  in the switch statement
        switch (b)
        {
        case 0:
            printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("The division of %d by %d is %d\n", a, b, a / b);
            break;
        }
        break;
    case 5:
        // Avoid modulus by zero by handling zero denominator directly in the switch statement
        switch (b)
        {
        case 0:
            printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("The modulus of %d and %d is %d\n", a, b, a % b);
            break;
        }
        break;
    default:
        printf("Invalid operator choice\n");
        break;
    }

    return 0;
}
