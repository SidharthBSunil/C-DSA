#include<stdio.h>
int main()
{
    int num,arr[4]={2,3,5,7};
    printf("enter a number \n");
    scanf("%d",&num);
    for(int i=0;i<4;i++)
    {
        while(num%arr[i]==0)
        {
            num=num/arr[i];
            //printf("%d\t\n",num);
            printf(" %d,",arr[i]);

        }
    }
    if(num > 1)
        printf("%d", num);

    
return 0;
}