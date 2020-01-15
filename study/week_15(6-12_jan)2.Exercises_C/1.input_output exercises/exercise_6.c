/*ΑΣΚΗΣΗ 6
Να γράψετε πρόγραμμα που να διαβάζει 
κάποια χρονική διάρκεια σε ώρες, 
λεπτά και δευτερόλεπτα (τρεις διαφορετικοί αριθμοί) 
και να την εμφανίζει ολόκληρη σε δευτερόλεπτα.*/

#include<stdio.h>

int main(void)
{
    int t, h, m, s;

    printf("Hours: ");
    scanf("%d", &h);

    printf("Minutes: ");
    scanf("%d", &m);

    printf("Seconds: ");
    scanf("%d", &s);

    t=h*3600+m*60+s;
    
    printf("Synolikos xronos: %d secs\n", t);
}
