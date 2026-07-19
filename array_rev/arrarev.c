#include<stdio.h>
void main()
{
    int arr[]={16,13,7,2,11};
    int n=5;
    int mid=n/2,temp=0;
    for(int i=0;i<mid;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }




}