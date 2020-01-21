/*Πρόγραμμα 19 
Υπολογισμός του μέτρου ενός διανύσματος
με τη χρήση μονοδιάστατου πίνακα */

#include <stdio.h>
#include <math.h>
int main()
{
    double metro = 0;
    double v[3] = {1, 2, 3};
    int i;

    for (i = 0; i < 3; i++)
        metro += pow(v[i], 2);
    metro = sqrt(metro);
    
    /* Επαναληπτική κλήση της printf */
    printf("To metro toy dianysmatos [");
    for (i = 0; i < 3; i++)
        printf("%lf, ", v[i]);
    printf("\b\b] einai %lf\n", metro);
    return 0;
}