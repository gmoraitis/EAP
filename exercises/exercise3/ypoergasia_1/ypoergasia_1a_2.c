/*Periptwsh 2*/

#include<stdio.h>

void what(int *a, int *b);

int main()
{
    int x = 1, y = 3;
    printf("%d %d\n", x, y);
    what(&x, &y);
    printf("%d %d\n", x, y);
}
void what(int *a, int *b)
{
    *a = *a + 1;
    *b = ++*b;
}