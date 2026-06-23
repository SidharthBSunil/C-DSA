#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr=(int *)malloc(sizeof(int)*5);
    int i=10;
    ptr=&i;
    if(ptr==NULL)
    {
        printf("memory allocation failed");
        exit(0);
    }

    //pr

    printf("number is %d",++(*ptr));
    //scanf()

}