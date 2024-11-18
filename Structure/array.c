#include <stdio.h>
int main()
{
    union myarray
    {
        int a;
        char b;
        char c[20];

    } arr1;
    arr1.a = 100;
    printf("\n a=%d", arr1.a);
    printf("\n b=%c", arr1.b);

    return 0;
}
