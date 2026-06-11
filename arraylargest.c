#include<stdio.h>


void main()
{
    int A[5],num;
    printf("enter the arr of number to print\n");
    scanf("%d",&num);
    printf("enter the numbers ");
    for(int i=0;i<=num;i++)
    {
        scanf("%d",&A[i]);
    }
    int large=A[0];
    for(int i=0;i<=num;i++)
    {
        if(large<A[i])
        {large=A[i];

        }
    }
    printf("\nlargest number is %d\n",large);
}