#include <stdio.h>
int main(){
   struct student
   {
    char name[20];
    int rollno;
    char mobile[11];
   };
    struct student s1;
    printf("Enter name of students: ");
    gets(s1.name);
    printf("Enter roll no of students: ");
    gets(s1.rollno);
    printf("Enter number of students: ");
    gets(s1.mobile);

    return 0;
}