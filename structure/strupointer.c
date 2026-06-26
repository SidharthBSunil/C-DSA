#include<stdio.h>

struct student
{
char name[20];
int age;
int rollno;
};
struct student increment_age(struct student s1);

void display(struct student *str);
int  main(void)
{
    struct student s1;
    struct student s2={"manu",30,11};

    printf("enter the student name");
    scanf("%s",s1.name);

    printf("enter the age\n");
    scanf("%d",&s1.age);

    printf("enter the rollno\n");
    scanf("%d",&s1.rollno);

    s1=increment_age(s1);
    display(&s1);

    s2=increment_age(s2);
    display(&s2);

    return 0;
}

struct student increment_age(struct student commonstru)
{
    commonstru.age=commonstru.age+5;
    return commonstru;

}

void display(struct student *str)
{
    printf("Name is %s\t age is %d \t roll no is %d \t \n",str->name,str->age,str->rollno);
}