#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*χρησιμοποιούνται ακέραιοι για να αποθηκευτούν οι λογικές μεταβλητές*/ int A, B, C, F;

    /*ανάγνωση του A με έλεγχο αν η τιμή είναι 0 ή 1*/
    do
    {
        printf("\nType valye of A (0 - 1): ");
        scanf("%d", &A);
    } while ((A != 0) && (A != 1));

    /*ανάγνωση του B με έλεγχο αν η τιμή είναι 0 ή 1*/
    do
    {
        printf("\nType value of B (0 - 1): ");
        scanf("%d", &B);
    } while ((B != 0) && (B != 1));
    
    /*ανάγνωση του C με έλεγχο αν η τιμή είναι 0 ή 1*/
    do
    {
        printf("\nType value of C (0 - 1): ");
        scanf("%d", &C);
    } while ((C != 0) && (C != 1));

    
    F = !(!B || !C) | !(!A && !B);

    printf("\nThe output is F = %d\n", F);

    return 0;
}