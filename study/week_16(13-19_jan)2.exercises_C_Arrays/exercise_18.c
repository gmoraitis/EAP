/*Πρόγραμμα 18 

 Υπολογισμός μέσης τιμής και διασποράς με τη χρήση μονοδιάστατου πίνακα */

#include <stdio.h>
#include <math.h>
int main()
{
    /* Χρησιμοποιώ δύο αθροιστές έναν για τον υπολογισμό της
μέσης τιμής mt και ένα για τον υπολογισμό της διασποράς dias */
    double sum = 0, sum2 = 0, a[100], mt, dias;
    int i, num;

    printf("Dose to plhthos ton dedomenon (to poly 99)\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        /* ∆ιαβάζω τις μετρήσεις από το πληκτρολόγιο. ΦΤΙΑΞΗΜΟ ΠΙΝΑΚΑ ΑΠΟ ΤΙΜΕΣ ΤΟΥ ΧΡΗΣΤΗ */
        printf("Give number %d\n", i);
        scanf("%lf", &a[i]); //lf = long double
        sum += a[i];
    }
    mt = sum / num;
    printf("Mesh timh = %lf\n", mt);
    for (i = 1; i <= num; i++)
        sum2 += pow(a[i] - mt, 2);
    dias = sum2 / num;
    printf("Diaspora = %lf\n", dias);
    return 0;
}