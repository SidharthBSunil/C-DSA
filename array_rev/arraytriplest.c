#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,target,temp,temp_target;
    printf("enter the number of array\n");
    scanf("%d",&n);
    int *arr =malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("array allocation is failed");
        return 1;
    }
    printf("enter the array number \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the target number to check \n");
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            temp=arr[i]+arr[j];
            temp_target=target-temp;
            for(int k=0;k<n;k++)
            {
                if(k==i||k==j)
                {
                    
                }
                else if(temp_target==arr[k])
                {
                    printf("i no is %d\n",i);
                    printf("j no is %d\n",j);
                    printf("k no is %d\n",k);
                    printf("True\n");
                    return 1;
                }
            }    
        }
    }
    free(arr);
}