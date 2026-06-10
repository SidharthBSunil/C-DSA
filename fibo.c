#include<stdio.h>
void main()
{
    int num=0,sum=1,res=0;
printf("enter a the number to find fibonicci ");
scanf("%d",&num);
if(num<1)
{
printf("1");
}
else
{
    printf("1");
    for(int i=0;i<num;i++)
    {
        sum+=res;
        res=sum;
        printf("%d\t",sum);
    }
}

}