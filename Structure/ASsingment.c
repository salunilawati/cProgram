#include <stdio.h>
int main()
{

    struct student
    {
        char name[25];
        int rollno;
        int marks[5];
        struct
        {
            char district[25];
            char zone[25];
        }address;
    };

    struct student stui;
    printf("\nEnter thee student details: ");
    printf("\nName: ");
    scanf(" %[^\n]", stui.name);
    printf("\nRoll no: ");
    scanf(" %d]", &stui.rollno);
    printf("\nEnter marks of 5 subject: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &stui.marks);
    }  

    printf("\nDistrict: ");
    scanf(" %[^\n]", stui.address.district);
    printf("\nZone: ");
    scanf(" %[^\n]", stui.address.zone);

    printf("\nDetails of the student are:-\nName:- %s \nRoll Number:- %d\nmarks:- %s\ndistrict:- %s\nzone:- ", stui.name, stui.rollno, stui.marks, stui.address.district, stui.address.zone);

    return 0;
}