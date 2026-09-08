#include<stdio.h>
#include<string.h>
int main()
{
    char C,B;
    int t,res=1;
    printf("enter the number\n");
    scanf(" %c",&C);
    printf("enter the power number\n");
    scanf(" %c",&B);
    t=[strlen(C) - 1]-'0';
    int h=B-'0';
    while(h!=0)
    {
        res*=t;
        printf("*\n");
        h--;
    }
    printf("result is %d \n",res);
    printf("%d \n",res%10);
        
    
}