//WAP to find the sum of all number 1 to 10 

#include <stdio.h>
int main()
{
    int i, sum  ;
    for (i=0; i<=10 ;i++){
        sum = sum + i;
        printf("%d \n", sum);
    }
    printf("sum=%d",sum);
    return 0;
}