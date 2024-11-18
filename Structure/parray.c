#include <stdio.h>
int main()
{
    int my_array[5]={1,2,3,4,5},i;
    for(i=0;i<5;i++){
        printf("Value of a[%d] =%d\t ", i, (my_array+i));
         printf("Address of a[%d] =%u\n ", i, my_array+i);
    }
}
// int main(){
//      int my_array[5]={1,2,3,4,5},i;
//      for(i=0;i<5;i++){
//         printf("Value of a[%d] =%d\t ",i,my_array[i]);
//         printf("Address of a[%d] =%u\t ", i, &my_array[i]);
//      }
//      return 0; 
// }