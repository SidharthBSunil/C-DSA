#include<stdio.h>
void main()
{
    int num=0,sum=1,res=0,next=0;
printf("enter a the number to find fibonicci ");
scanf("%d",&num);
if(num<1)
{
printf("1");
}
else
{
    printf("1\t");
    for(int i=0;i<num;i++)
    {
        next=sum+res;
        res=sum;
        sum=next;
        printf("%d\t",next);
    }
}

}