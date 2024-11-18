#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 0, *ptr, n;

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

    printf("\n Enter three more value: \n");

    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
        
    }

    for (i = 0; i < 10; i++)
    {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }

    printf("The sum of the five integers is %d", sum);

    return 0;
}