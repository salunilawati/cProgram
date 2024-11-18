// WAP 2 dimention array with value stored and display using malloc function and free with structure
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    struct student
    {
        char name[20];
        int rollno;
    };
    struct student *ptr;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    ptr = (struct student *)malloc(n * sizeof(struct student));
    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", &ptr[i].name);
        printf("Enter the roll no of student %d: ", i + 1);
        scanf("%d", &ptr[i].rollno);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Name of student %d: %s\n", i + 1, ptr[i].name);
        printf("Roll no of student %d: %d\n", i + 1, ptr[i].rollno);
    }
    
}