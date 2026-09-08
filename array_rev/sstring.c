#include<stdio.h>
#include<string.h>
int main()
{
    
    
   int arr[10]={0},i=0;
   char s[100];
   scanf("%s",s);
    while(s[i]!='\0')
    {
        if(s[i]>='0' && s[i<='9'])
        {
            arr[s[i]-'0']++;
        }
        i++;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    
}