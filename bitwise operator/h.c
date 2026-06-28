#include <stdio.h>

void displayBits(int x);

int main(void)
{
    int a = 7;

    printf("a = %d\t", a);
    displayBits(a);

    return 0;
}

void displayBits(int x)
{
    int i;

    for (i = 31; i >= 0; i--)
    {
        printf("%d", (x >> i) & 1);

        if (i % 4 == 0)
            printf(" ");
    }

    printf("\n");
}