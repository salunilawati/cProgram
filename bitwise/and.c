#include <stdio.h>

int main()
{
    
    int a = 5; // 101
    int b = 3; // 011
    int and = a & b; // 001
    int or = a|b; // 0111
    int xor = a^b; // 0110
    int not = ~a; // 
    int leftShift =a<<b;
    int rightShift =a>>b;

    printf("%d\n", and); // output: 1
    printf("%d\n",or); // output : 7
    printf("%d\n",xor); // output: 6
    printf("%d\n",not); 
    printf("%d\n",leftShift); 
    printf("%d\n",rightShift);

    return 0;

}