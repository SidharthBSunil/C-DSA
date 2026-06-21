#include<stdio.h>
int main()
{
    int n;
    printf("enter array number limit");
    scanf("%d",&n);
    int arr[n],*ptr=arr,temp=0;
    printf("enter the numbers");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));

    }
    int *first=ptr;
    int *last=(ptr+n-1);
    while(first<last)
    {
        temp=*first;
        *first=*last;
        *last=temp;
        first++;
        last--;



    }
    printf("number are \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
}