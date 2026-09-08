#include<stdio.h>
int main()
{
    int arr[10],n,k;
    printf("enter the number of array");
    scanf("%d",&n);
    printf("enter the number");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the multpile");
    scanf("%d",&k);
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(k==arr[j])
            {
                
              
                k+=k;
            }
        }
    }
    printf("smallest is  %d",k);
    
}