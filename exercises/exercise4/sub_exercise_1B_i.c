#include <stdio.h>
// #include <stdlib.h>
#define N 9

int main()
{
    // system("chcp 1253>nul");
    int Table[N];

    int i, j, k, l; //n;

    Table[0] = 1;
    for (l = 1; l < N + 1; l++)
    {
        Table[l] = 0;
    }

    // for (n = 0; n < N+1; n++)

    // { printf ("%d, ", Table[n]);
    // }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N + 1; j++)
        {
            Table[N - j] = Table[N - j] + Table[N - j - 1];
        }
        /* Τύπωμα βήματος - Αρχή*/
        // printf("\n");
        // for (k = 0; k < N+1; k++)
        // { printf ("%d, ", Table[k]);
        // }
        /* Τύπωμα βήματος - Τέλος*/
    }

    printf("\nΗ ανάπτυξη του πολυωνύμου ( x + y )^9 είναι : ");
    for (k = 0; k < N + 1; k++)
    {
        printf("%d, ", Table[k]);
    }

    printf("\n");
    // system("pause");
    return 0;
}