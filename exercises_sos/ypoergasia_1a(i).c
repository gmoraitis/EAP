#include <stdio.h>

void what(int a, int b)
{
    a = a + 1;
    ++b;
}
int main(void)
{
    int x = 1, y = 3;

    printf("%d %d\n", x, y);

    what(x, y);

    printf("%d %d\n", x, y);
}
