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
 struct parent p1 = {25, {195, 'A'}};
printf("%d\t,%d\t,%c\t",p1.a,p1.b.x,p1.b.c);
}