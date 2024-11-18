#include <stdio.h>

// name, address, rollno, 1 student

struct Student
{
    char name[40];
    char address[40];
    int rollno;
} student;

void printStructure(struct Student *ptr){
    printf("\nStudent details: ");
    printf("Name :%s\nAddress:%s\n Roll no:%d", ptr->name, ptr->address,ptr->rollno);
};

int main()
{

    printf("\nEnter the name of the student: ");
    scanf(" %[^\n]", student.name);

    printf("Enter the address of the student: ");
    scanf(" %[^\n]", student.address);

    printf("Enter the roll number of the student: ");
    scanf("%d", &student.rollno);

    printStructure(&student);

    return 0;
}

//structure name phone rol no adresss chai xuttai strhcture 
// nesting structure adress district zone