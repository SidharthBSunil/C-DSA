#include<stdio.h>
int main()
{
    int n,temp=0;
    printf("enter range of prime number\n");
    scanf("%d",&n);
    if(n<2)
    {
        printf("0");

    }
    else
    {
        for(int i=2; i<=n; i++)
        {
            for(int j=1;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    temp++;
                }
                

            }
            if(temp==1)
            {
                printf("%d,\t",i);
                
            }
            temp=0;
        }
    }


}