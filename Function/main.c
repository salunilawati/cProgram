#include <stdio.h>

int main()
{

    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    add(x, y);
    printf("\n x=%d\t y=%d", x, y);

    return 0;
}

void add(int x, int y)
{
    x = x + 1;
    y = y + 1;
    printf("sum=%d", x + y);
}