//  add 2 dimentional matrix
#include <stdio.h>
int main()
{

    int a[2][2], b[2][2], c[2][2], i, j;

    // printf("\nEnter the row and col value: ");
    // scanf("%d %d", &row, &col);//2:2

    printf("Enter the first element array: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }

    } // end of main loop

    printf("Enter the second array elements: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n Result Array; \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
    }
    return 0;
}