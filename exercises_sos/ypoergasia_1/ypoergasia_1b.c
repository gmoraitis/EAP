#include <stdio.h>

void f(int k)
{
    int i;
    if (k == 0)
        return;
    printf("%d\n", k);
    for (i = 1; i < k; i = i + 2)
        //printf("%d\n", i); //open second and it will loop for ever
        f(i);
        //printf("%d\n", i); //open first
        
}

int main(void)
{

    f(3);
}