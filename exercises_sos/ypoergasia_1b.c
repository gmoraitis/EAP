#include <stdio.h>

void f(int k)
{
    int i;
    if (k == 0)
        return;
    printf("%d\n", k);
    for (i = 1; i < k; i = i + 2)
        f(i);
}

int main(void)
{

    f(7);
}