#include<stdio.h>
void main()
{
int n;
printf("enter a number ");
scanf(" %d",&n);
int sqr=n*n,dul=0,i=1,temp=n;
while(n!=0)
{
    n=n/10;
    dul=sqr%(10*i);
    i*=10;

}
if(temp==dul)
{
printf("it is auto");
}
else
{
    printf("it is not auto");
}
}