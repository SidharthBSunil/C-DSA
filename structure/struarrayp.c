#include<stdio.h>
struct student
{
char name[20];
int age;
int rollno;
};

//struct student data_input(struct student *data);
//void display(struct student *str);
struct student data_input(struct student *data)
{
    printf("Enter the name ");
    scanf("%s",data->name);

    printf("Enter the age");
    scanf("%d",&data->age);

    printf("Enter the roll numbers");
    scanf("%d",&data->rollno);

    //return stru;
}

void display(struct student *struc)
{
 printf("name is %s \t age is %d\t roll number is %d\t \n",struc->name,struc->age,struc->rollno);
}
int main(void)
{
    int n;
    printf("pls enter the number of students");
    scanf("%d",&n);
    struct student s1[n];
    for(int i=0;i<n;i++)
    {
    data_input(&s1[i]);
    }
    for(int i=0;i<n;i++)
    {
    display(&s1[i]);
    }
   return 0;
}
