#include <stdio.h>
int main()
{

    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("sum=%d", add (x,y));

    return 0;
}

int add(int x, int y)
{
    x = x + 1;
    y = y + 1;
   return x+y;
}