#include<stdio.h>


void main()
{
    int A[20],n,Sum=0;
    printf("enter the nth number");
    scanf("%d",&n);
    
    printf("enter array number");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&A[i]);
        Sum+=A[i];
    }
    printf("printing ...........\n");
    printf("Sum is %d\n",Sum);
   
}