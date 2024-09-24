#include <stdio.h>
int main(){
    int x=10;
    printf("\n x=%d",x);
    {
        int x=5;
        printf("\n x= %d",x);

    }
    printf("\n x=%d",x);

    return 0;
}