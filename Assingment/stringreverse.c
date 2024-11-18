#include <stdio.h>
#include <string.h>
void reverse(char string[50]) ;
int main()
{
    char string[50];
    printf("Enter a string: ");
    gets(string[50]);

    reverse(string);
    int length= strlen(string);

    printf("Reversed: %s", string);

    return 0;
}

void reverse( char string[50]){
    int i, j;


}