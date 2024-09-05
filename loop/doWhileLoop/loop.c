#include <stdio.h>
int main(){

int a=1,count=0;
do{
    printf("%d\t",a);
    a=a/2;
    count++;

}while(a>1);

printf("loop executed %d times", count);
}