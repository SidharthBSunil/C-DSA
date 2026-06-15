#include<stdio.h>


int main()
{
    int a=10,b=10;
    int *ptra=&a,*ptrb=&b;
    printf("address of a is %p",&a);
    //printf("address of a is %p",*ptra);
    printf("\nsum is %d\n\n",*ptra+*ptrb);

}