#include<stdio.h>

void main()
{
    int a=10;
    int *ptr=&a;
    int **p=&ptr;
    printf("%d",**p);

}