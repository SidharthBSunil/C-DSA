#include <stdio.h>

int main()
{
    char str[] = "hello,world how;are,you";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ',' || str[i] == ';' || str[i] == ' ')
        {
            printf("\n");   // New token
        }
        else
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}