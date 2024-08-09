#include <stdio.h>
int main(){
    long double m,n;
    printf("Enter two numbers: \n");
    scanf("%Lf %Lf", &m, &n);
    long double sum = m + n;
    printf("The sum of the numbers is: %Lf\n", sum);
}