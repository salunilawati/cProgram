//WAP to store 5 values using array and using pointer display the value

#include <stdio.h>

void printSum(int *data)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(data + i);
    }

    printf("The sum of your data is:- %d", sum);
}

int main()
{

    int data[5];
    printf("\nEnter 5 values to find the sum of:-\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &data[i]);
    }

    printSum(data);

    return 0;  
}