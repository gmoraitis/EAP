#include <stdio.h>
#define N 9

int main()
{
    int Table[N + 1];

    int i, j, k, l; 

    Table[0] = 1;
    for (l = 1; l < N + 1; l++)
    {
        Table[l] = 0;
    }


    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            Table[N - j] = Table[N - j] + Table[N - j - 1];
        }
    }

    printf("\nΗ ανάπτυξη του πολυωνύμου ( x + y )^9 είναι : ");
    for (k = 0; k < N + 1; k++)
    {
        printf("%d, ", Table[k]);
    }

    printf("\n");
    return 0;
}