/*ΑΣΚΗΣΗ 7
Να γράψετε πρόγραμμα που να υπολογίζει
σε ώρες, λεπτά και δευτερόλεπτα 
κάποιο χρονικό διάστημα που δίνεται αρχικά ολόκληρο σε δευτερόλεπτα.*/

#include<stdio.h>
int main(void)
{
    int t, h, m, s;

    printf("Dose ton xrono se sec: "); 
    scanf("%d", &t);

    h=t/3600;
    t=t%3600;
    m=t/60;
    s=t%60;

    printf("%d hours, %d mins, %d secs\n", h, m, s);
}