#include<stdio.h>


int main()
{
    int n;
    printf("enter the number of wanted ");
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    printf("pls enter the numbers");
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",p+i);
       
    }
    for(int i=0;i<n;i++)
    {
        printf("number are %d\n",*(p+i));
         printf("%p\n",p+i);
    }

        printf("\nentering the space of ............\t");
        printf("\nSize of your data: %zu bytes\n", sizeof(arr[0]));

}