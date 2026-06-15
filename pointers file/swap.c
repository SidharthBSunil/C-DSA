#include<stdio.h>


int main()
{
    int a=10,b=20;
    int *ptra=&a,*ptrb=&b,temp=0;
    temp=*ptra;
    *ptra=*ptrb;
    *ptrb=*ptra;

    printf("address of a is %p",&a);
    //printf("address of a is %p",*ptra);
    printf("\nsum is %d\n\n",*ptra);

}