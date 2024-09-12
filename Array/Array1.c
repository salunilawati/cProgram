// array1
#include <stdio.h>

int main()
{
    int num[] = {23, 31, 4, 56, 75, 24, 55, 44, 13, 69};
    int i, j, temp;

    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (num[i] < num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}