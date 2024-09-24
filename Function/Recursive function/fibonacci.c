#include <stdio.h>
int main()
{

    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\t%d", fibo(i));
    }

    return 0;
}

int fibo(int x){
    if (x == 0 || x == 1)
    {
        return x;
    }
    else
    {
        return fibo(x - 1) + fibo(x - 2);
    }
}