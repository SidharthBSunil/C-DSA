#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[1001];
    scanf("%s", str);

    printf("enter the name");
    scanf("%s",str);
    int length_string=strlen(str),arr[11];
    int j=10*length_string;
    while(j!=0)
    {
        int num=0;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]==i)
            {
                num++;
                arr[i]=num;

            }
            
        }
        j--;
    }
    printf("\n");
    for(int i=0;i<=10;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
