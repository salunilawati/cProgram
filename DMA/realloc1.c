#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 0, *ptr, n,nw;

    printf("Enter the number you want to do sum of:\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }

    printf("Enter %d numbers:  ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }

    printf("The sum of the five integers is %d", sum);

    printf("\n Numbers you want to add more: \n");
    scanf("%d ",&nw);

    ptr = (int *)realloc(ptr, n+nw * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);

    }

    for (i = n; i < n+nw; i++)
    {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }

    printf("The sum of the five integers is %d", sum);

    return 0;
}