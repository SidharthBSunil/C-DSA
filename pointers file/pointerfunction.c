#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}
int main()
{
int (*ptr)(int,int);
ptr=add;
printf("number is %d",ptr(5,6));
}