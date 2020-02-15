#include <stdio.h>
int main()
{
    int pin[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int i = 0;
    // int j = 0;
    int *a_ptr;

    a_ptr = *pin;

    // int numArray[5] = {1, 2, 3, 4, 5};
    // int *pint;
    // pint = numArray;

    // for (i = 0; i < 3; i++)     //σάρωση κάθε γραμμής i
    //     for (j = 0; j < 3; j++) //σάρωση κάθε στήλης της γραμμής j
    printf("%i", *a_ptr + 6); // Εμφάνιση της θέσης του 4ου στοιχείου
    printf("\n");
    return 0;
} 