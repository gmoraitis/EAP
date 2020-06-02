#include <stdio.h>
#define N 3

int main()
{
    int Table[N + 1];

    int i, j, k, h, l;

    Table[0] = 1;
    for (l = 1; l < N + 1; l++)
    {
        Table[l] = 0;
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            for (h = 0; h < N; h++)
            {
                //Table[N - h] = Table[N - j] + Table[N - j - 1] + Table[N - h - 1] ;

                Table[N - h] = Table[N - j] + Table[N - j - h - 1];
            }
        }
        /* Τύπωμα βήματος - Αρχή*/
        // printf("\n");
        // for (k = 0; k < N+1; k++)
        // { printf ("%d, ", Table[k]);
        // }
        /* Τύπωμα βήματος - Τέλος*/
    }

    printf("\nΗ ανάπτυξη του πολυωνύμου ( α + β + γ )^3 είναι : ");
    for (k = 0; k < N + 1; k++)
    {
        printf("%d, ", Table[k]);
    }

    printf("\n");
    return 0;
}