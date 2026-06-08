#include<stdio.h>
struct Student
{
int rollno;
char name[21];
};
char main()
{
    struct Student s1={38,"Sid"};
    struct Student s2={.name="sia",.rollno=8};
    printf("Student name is %s\t\n",s1.name);
     printf("Student name is %ld\t",sizeof(struct Student));
}