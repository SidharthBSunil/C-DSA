#include<stdio.h>


void main()
{
    int A[20],n,nlar,lar,mem=0;
    printf("enter the nth number");
    scanf("%d",&n);
    printf("which is last largest number");
    scanf("%d",&nlar);
    printf("enter array number");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("printing ...........\n");
    //int i=0;
    while(nlar!=0)
    {lar=A[0];
    for(int i=0;i<=n;i++)
    {
        if(lar<A[i])
        {
            lar=A[i];
            mem=i;
        }
    }   
        A[mem]=0;
        nlar--;

    }
       printf("largest n number is %d\n",lar);
    
}