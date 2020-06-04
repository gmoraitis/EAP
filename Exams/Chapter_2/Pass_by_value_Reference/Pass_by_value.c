/* - BY value creates a copy of that variable to change only in the function. */

#include <stdio.h>
int k, l;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

main()
{
    k = 10;
    l = 20;
    swap(k, l);
    printf("%d,%d\n", k, l);
}

