#include <stdio.h>
int main()
{
    union myarray
    {
        int a;
        char b;
        char c[20];

    }arr[3];
    printf("\nEnter value first: ");
    scanf("%d",&arr[0].a);
    printf("\nEnter second value: ");
    scanf("%c",&arr[1].b);
    printf("\n Enter third value: ");
    scanf(" %[^\n]", &arr[2].c);
}