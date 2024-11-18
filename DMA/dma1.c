//WAP using DMA 2 Dimentional using calloc

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr,row,col;
   printf("Enter the number of rows and columns:");
   scanf("%d%d",&row,&col);
   ptr=(int*)calloc(row*col,sizeof(int));
   if(ptr==NULL)
   {
    printf("Memory not allocated");
    exit(0);
    }
    printf("Enter the elements of the matrix:\n");

    for( int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",(ptr+i*col+j));
        }
        for(int i=0;i<row;i++){
            for(int j=0; j<col;j++){
                printf("%d ",*(ptr+i*col+j));

            }
            printf("\n");
        }
    }

    


    return 0;
}