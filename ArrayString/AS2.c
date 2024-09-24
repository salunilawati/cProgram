#include <stdio.h>
int main()
{
    char name[23], ch;
    int i = 0;

    printf("Enter your name: ");
    while ((ch = getchar()) != '\n')
    {
        name[i] = ch;
        i++;
    }
    name[i] = '\0';

    printf("Your name is %s", name);

    return 0;
}   