#include<stdio.h>
int main()
{
    int num=0,sum=0;
    //printf("enter a number");
    printf("%ld",sizeof(int));
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum>num)
    {
        printf("it is abuntantany");
    }
    else
    {
        printf("it is not ");
    }

}
