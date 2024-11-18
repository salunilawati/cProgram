// Wriite a C program to store 5 names and display the names in ascending order using function
#include <stdio.h>
#include <string.h>
void sortNames(char names[5][50]);
int main()
{
    char names[5][50];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name %d: ", i + 1);
        gets(names[i]);
        // scanf("%s", &names[i]);
    }
    sortNames(names);
    for (int i = 0; i < 5; i++)
    {
        printf("Name %d: %s\n", i + 1, names[i]);
    }
    return 0;
}

void sortNames(char names[5][50])
{
    char temp[50];
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}
