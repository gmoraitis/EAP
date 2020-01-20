/*ΑΣΚΗΣΗ 6
Να γράψετε πρόγραμμα που να διαβάζει 20 ακέραιους αριθμούς
και στο τέλος να εμφανίζει το μικρότερο από αυτούς.*/

#include <stdio.h>
int main(void)
{
    int a, min, i;
    for (i = 1; i <= 20; i++)
    {
        printf("Arithmos-%d: ", i);
        scanf("%d", &a);
        if (i == 1)
            min = a;
        else if (a < min)
            min = a;
    }
    printf("Mikroteros: %d\n", min);
}
