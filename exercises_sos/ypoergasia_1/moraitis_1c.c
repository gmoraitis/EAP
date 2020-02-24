#include <stdio.h>
int main()
{
    int pin[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // i)Δήλωση πίνακα

    int *a_ptr; // ii) Οριζμός δείκτη
    a_ptr = *pin;

    printf("%i", *a_ptr + 6); // iii) Εμφάνιση της θέσης του 7ου στοιχείου
    printf("\n");
    return 0;
}