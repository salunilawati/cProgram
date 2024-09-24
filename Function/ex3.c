//Find the factorial number from the function
#include <stdio.h>

int factorial(int num);


int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("Factorial of %d = %d", x, factorial(x));
    

}
int factorial( int x ){
    int result=1;
    for (int i = 1; i <= x; i++)
    {
    result=result*i;
    }

    return result;
}