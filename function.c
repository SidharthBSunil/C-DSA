#include <stdio.h>

int main()
{
    char string1[100], string2[100];

    printf("Enter the first string: ");
    scanf("%[^\n]", string1);

    getchar();   // Consume newline

    printf("Enter the second string: ");
    scanf("%[^\n]", string2);

    printf("\nFirst : %s", string1);
    printf("\nSecond: %s", string2);

    return 0;
}