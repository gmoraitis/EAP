/*Πρόγραμμα 24 
Το πρόγραμμα μετράει το πλήθος των γραμμών που έχουμε εισάγει από
το πληκτρολόγιο. Το τέλος εισαγωγής δεδομένων δηλώνεται με το
σύμβολο ('*'). */

#include <stdio.h>
int main()
{
    int c, nl = 1;
    c = getchar();
    while (c != '*')
    {
        if (c == '\n')
            nl = nl + 1;
        c = getchar();
    }
    printf("To plithos twn grammwn einai: %d\n", nl);
}
