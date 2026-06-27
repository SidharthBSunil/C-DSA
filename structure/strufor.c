#include<stdio.h>
struct student
{
char name[20];
int age;
int rollno;
};

struct student data_input(struct student stru);
void display(struct student str);
int main(void)
{
    int n;
    printf("pls enter the number of students");
    scanf("%d",&n);
    struct student s1[n];
    for(int i=0;i<n;i++)
    {
    s1[i]=data_input(s1[i]);
    }
    for(int i=0;i<n;i++)
    {
    display(s1[i]);
    }
   return 0;
}
struct student data_input(struct student stru)
{
    printf("Enter the name ");
    scanf("%s",stru.name);

    printf("Enter the age");
    scanf("%d",&stru.age);

    printf("Enter the roll numbers");
    scanf("%d",&stru.rollno);

    return stru;
}

void display(struct student struc)
{
 printf("name is %s \t age is %d\t roll number is %d\t \n",struc.name,struc.age,struc.rollno);
}