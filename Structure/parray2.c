#include <stdio.h>
int main(){

    int my_array[5];

    printf("enter the numbber:  \n");
    for(int i=0;i<5;i++){
        scanf("%d",&my_array[i]);
    }
    
   
    for (int i = 0; i < 5; i++)
    {
        printf("Value of a[%d] =%d\t ", i, (my_array + i));
        printf("Address of a[%d] =%u\n ", i, my_array + i);
    }
   
}