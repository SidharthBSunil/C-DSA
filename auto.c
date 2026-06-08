#include<stdio.h>

int main()
{
    int n = 4, rem, valu = 62525,i=1;

    while(n)
    {
        rem = valu % (10*i);
        i*=10;
        n--;
    }

    printf("%d\n", rem);
    return 0;
}