#include <stdio.h>
int main(){
    int a = 5 , b =10, c=14;
    int largest = (a>b?(a>c?a:c):(b>c?b:c));
    printf("%d",largest);

    return 0;
}