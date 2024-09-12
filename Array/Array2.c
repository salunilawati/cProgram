// array2
#include <stdio.h>

int main()
{
    int num[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the number:");
        scanf("%d", &num[i]);
    }

    printf("Values of array :\n");
    for (int i = 0; i <= 5; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}