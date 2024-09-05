#include <stdio.h>
int main(){
    // pre condition loop
    int a=5000, count=0;
    while(a>1){
        count++;
        a=a/5;
        printf("%d\t",a);
    }
    printf("This loop is executed %d times",count);
    // int a = 1, count = 0;
    // while (a > 1)
    // {
    //     count++;
    //     a = a / 5;
    //     printf("%d\t", a);
    // }
    // printf("This loop is executed %d times", count);

    return 0;
}