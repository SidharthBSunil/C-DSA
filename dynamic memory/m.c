#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr=(int *)malloc(sizeof(int)*5);
    if(ptr==NULL)
    {
        printf("failed");
        exit(0);
    }
    printf("enter the numbers");
    for(int i=0;i<5;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("number are\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",(*ptr+i));
    }
}