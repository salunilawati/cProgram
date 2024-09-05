#include <stdio.h>
int main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    int fact=1;
    for(int i=1;i<=a;i++)
    fact=fact+1;
    printf("factorial of %d is %d\n",a, fact);

    return 0;
    
}