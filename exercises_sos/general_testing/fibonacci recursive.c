#include <stdio.h>

int Fibonacci(int);

int main()
{
    int n, i, k;

    printf("Dose to plithos ton arithmon Fibonacci\n");
    scanf("%d", &n);
    printf("\n\nEmfanisi seiras arithmon Fibonacci\n");

    i = 0;
    for (k = 0; k < n; k++)
    {
        printf("%2dos Arithmos= %3d\n", k + 1, Fibonacci(i));
        i++;
    }
    return 0;
}
int Fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
}