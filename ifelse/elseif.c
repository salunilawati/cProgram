#include <stdio.h>
// WAP to ask 2 integer no's from the user along with operater
int main()
{

    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    char operator;
    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &operator);          

    if (operator== '+')//single quotation is used
    {
        printf("%d + %d = %d\n", a, b, a + b);
    }
    else if (operator== '-')
    {
        printf("%d - %d = %d\n", a, b, a - b);
    }
    else if (operator== '*')
    {
        printf("%d * %d = %d\n", a, b, a * b);
    }
    else if (operator== '/')
    {
        printf("%d / %d = %d\n", a, b, a / b);
    }
    else if (operator== '%'){
        printf("%d %% %d = %d\n", a, b, a % b);
    }
    
    else
    {
        printf("Invalid operator");
    }
}
