#include<stdio.h>
struct child
{
    int x;
    char c;

};
struct parent
{
    int a;
    struct child b;
};
int main()
{
 struct parent p3 = {25, {195, 'A'}};
printf("%d\t,%d\t,%c\t",p3.a,p3.b.x,p3.b.c);
}