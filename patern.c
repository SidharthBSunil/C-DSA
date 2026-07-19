#include<stdio.h>
void main()
{
    int n=0;
    printf("enter the number");
    scanf("%d",&n);
    int temp=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>0;j--)
        {
            printf("%d",temp);
            if(i>=2)
        {
            if(i==j)
            {
                temp--;
            }
        }
        }
       
        printf("\n");
        //temp--;
    }

}