// dynamic Memory Allocaton
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr, i, sum = 0;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("\n Memory allocation failed.");
        exit(0);
    }
    printf("\n Enter %d values: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }
    printf("\n sum+%d", sum);
    free(ptr);
    return 0;
}