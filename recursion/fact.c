#include<stdio.h>
long int fact(int n);
int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    printf("factorial of %d is %ld\n",num,fact(num));


}

long int fact(int n)
{
 if(n==1)
    return 1;
 return (n*fact(n-1));
}