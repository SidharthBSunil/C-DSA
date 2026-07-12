#include<stdio.h>

int add(int a, int b)
{
    return a+b;
}
int main()
{
    int (*ptr)(int,int);
    ptr=add;
    printf("result is %d",ptr(10,12));
}