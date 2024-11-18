/* WAP to store student name, rollno, and address (district, zone) using structure. Here address is a different structure. Using concept of nested structure.
Using both concept of nesting structure. */

#include <stdio.h>
int main()
{
    struct Address
    {
        char district[50];
        char zone[50];
    };
    struct Student
    {
        char name[50];
        int rollNo;
        struct Address address;
        struct details
        {
            int phoneNumber;
            char email[50];
        } personal;
    };

    struct Student student;
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.rollNo);
    printf("Enter district: ");
    scanf("%s", student.address.district);
    printf("Enter zone: ");
    scanf("%s", student.address.zone);
    printf("Enter phone number: ");
    scanf("%d", student.personal.phoneNumber);
    printf("Enter email: ");
    scanf("%s", student.personal.email);

    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNo);
    printf("District: %s\n", student.address.district);
    printf("Zone: %s\n", student.address.zone);
    printf("Phone Number: %d\n", student.personal.phoneNumber);
    printf("Email: %s\n", student.personal.email);
    return 0;
}