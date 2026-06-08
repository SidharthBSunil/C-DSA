#include<stdio.h>
int main()
{
    int num=0,sum=0;
    printf("enter a number\n");
    scanf("%d",&num);
    int temp=num;
    while(num!=0)
    {
        sum+=num%10;
        num=num/10;

    }
    (temp%sum==0)?(printf("it is harshad number\n")):(printf("it is not harshad number \n"));
}