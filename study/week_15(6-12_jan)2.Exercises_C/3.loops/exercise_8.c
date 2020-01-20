/*ΑΣΚΗΣΗ 8
Να γράψετε πρόγραμμα που να διαβάζει έναν ακέραιο αριθμό m, 
ο οποίος θα πρέπει να ελέγχεται ώστε να είναι 1≤m≤30, και 
θα αντιστοιχεί στον αριθμό των μαθητών μιας τάξεως. 
Στη συνέχεια θα διαβάζει για κάθε μαθητή τον τελικό βαθμό του, 
ο οποίος θα πρέπει να ελέγχεται ώστε να είναι 1≤b≤20. 
Στο τέλος να εμφανίζει το μεγαλύτερο και το μικρότερο βαθμό καθώς και το μέσο όρο όλων των βαθμών.*/

#include <stdio.h>
#include<math.h> 
#define MINB 1 
#define MAXB 20
int main(void)
{
    int m, b, max, min, mo, sum, i;
    do
    {
        printf("Posoys mathites exei h taksi? (1 eos 30)");
        scanf("%d", &m);
    } while (m < 1 || m > 30);
    min = MAXB;
    max = MINB;
    sum = 0;
    for (i = 1; i <= m; i++)
    {
        do
        {
            printf("Bathmos tou %dou mathiti (1 eos 20): ", i);
            scanf("%d", &b);
        } while (b < MINB || b > MAXB);
        if (b < min)
            min = b;
        if (b > max)
            max = b;
        sum += b;
    }
    /* stroggyleysi ston plisiestero akeraio */
    mo = floor(0.5 + (float)sum / m);
    printf("Mikroteros: %d\n", min);
    printf("Megalyteros: %d\n", max);
    printf("Mesos oros: %d\n", mo);
}