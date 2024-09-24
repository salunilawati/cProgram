#include <stdio.h>

void swap(int,int);
int main()
{

    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    swap(num1,num2);
    printf("\n num1= %d \tnum2=%d", num1, num2);

    return 0;
}

void swap(int x, int  y){
    int temp;
    temp = x;
    x = y;
    printf("X=%d \t y=%d",x,y);
}