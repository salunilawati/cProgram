// using function add 2 dimentional matrix
#include <stdio.h>

void input(int x[][2], int i, int j){
    printf("Enter the array element : \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
}

void arrayadd(int x[][2], int y[][2], int z[][2], int i, int j)
{
    printf("\n Result Array; \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            z[i][j] = x[i][j] + y[i][j];
            printf("%d ", z[i][j]);
        }
    }
}
int main()
{

    int a[2][2], b[2][2], c[2][2], i, j;

    input(a,2,3);
    input(b,2,3); 
    arrayadd(a,b,c);
    
    
    return 0;
}
