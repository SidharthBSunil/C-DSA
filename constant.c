#include<stdio.h>
int main()
{
int a = 10;
int b = 20;

const int *ptr = &a;
printf("%d\n",*ptr);
a=30;      
printf("%d",*ptr);
//ptr = 30;     // ❌ Error
}