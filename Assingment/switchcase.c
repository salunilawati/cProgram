// WAP to ask the user for input and perform operator with respect to the operator using switch case.

#include <stdio.h>

int main()
{
    int a, b, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the operator: ");
    scanf(" %c",  operator);

    switch  (operator)
    {
    case '+': 
        result = a + b;
        printf("The sum is %d\n", result);
        break;

    case '-':
        result = a - b;
        printf("The difference  is %d\n", result);
        break;

    case '*':

        result = a * b;
        printf("The product is %d\n", result);
        break;

    case '/':
        result = a / b;
        printf("The division  is %d\n", result);
        break;

    default:
        printf("Invalid operator\n");
        break;
    }

    return 0;
}