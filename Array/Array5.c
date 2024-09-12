// WAP to accept n number of elements in an array & display its sum

#include <stdio.h>
#define SIZE 50
int main()
{

    int num[SIZE], size, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &num[i]);
        sum += num[i];
    }

    printf("\nSum of all elements of the array is: %d\n", sum);

    return 0;
}