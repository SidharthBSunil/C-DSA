#include<stdio.h>


void main()
{
    int A[5],num;
    printf("enter the number to print\n");
    scanf("%d",&num);
    printf("enter the numbers ");
    for(int i=0;i<=num;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\nprinting the numbers.......\n");
    for(int i=0;i<=num;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
}