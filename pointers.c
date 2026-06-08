#include <stdio.h>



int main() {
    int a=20, b=10;
    //scanf("%d %d", &a, &b);

    int *p1 = &a;
    int *p2 = &b;

    //swap_pointers(&p1, &p2);

    printf("%d", *p1+*p2);

    return 0;
}