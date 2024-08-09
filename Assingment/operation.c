#include <stdio.h>
int main()
{
    // increment
    int a = 5;
    printf("%d\n", a++); // prints 5 already increment but stores the value
    printf("%d\n", a); // prints 6 now it prints the results

    printf("%d\n", ++a);// prints 7
    printf("%d\n", a); // prints 7

    //same for the decrement
     

    //same precedence for all operators
    return 0;

}