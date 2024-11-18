#include <stdio.h>
void show(int (*p)[4], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("arr[%d][%d]=%d\n", i, j, *(*(p + i) + j));
        }
        printf("\n \n");
    }
}
int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
        };
    show(arr, 3, 4);
    return 0;
}