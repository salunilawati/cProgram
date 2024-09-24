#include <stdio.h>
// int fact(int);
int main()
{
    int n;
    printf("Enter the no. to find factorial of : ");
    scanf("%d", &n);
    printf("\n factorial of %d =%d", n, fact(n));
    return 0;
}
int fact(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}