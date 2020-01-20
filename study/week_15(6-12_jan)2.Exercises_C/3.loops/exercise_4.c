/*ΑΣΚΗΣΗ 4
Να γράψετε πρόγραμμα που να υπολογίζει το άθροισμα 1+2+...+100.*/

#include <stdio.h>
int main(void)
{
    int i, sum;
    sum = 0;
    for (i = 1; i <= 100; i++)
        sum += i;
    printf("Athrisma: %d\n", sum);
}
