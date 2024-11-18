#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, sum = 0, i, j, row = 3, col = 3;
    ptr = (int *)calloc(row * col, sizeof(int));
    if (ptr == NULL)
    {
        printf("\n Memory allocation is failed.");
        exit(1);
    }
    printf("\nEnter %d values: ", row * col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", (ptr + i * col + j));
        }
    }
    printf("\n The array is\n:");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", *(ptr + i * col + j));
        }
        printf("\n");
    }

    free(ptr);
    return 0;
}