/*ΑΣΚΗΣΗ 9
Να γράψετε πρόγραμμα που να διαβάζει συνεχώς αριθμούς 
μέχρι να διαβαστεί κάποιος αρνητικός αριθμός. 
Στο τέλος να εμφανίζει το μέσο όρο όλων αυτών των 
αριθμών εκτός του αρνητικού. Αν ο πρώτος αριθμός ήταν 
αρνητικός τότε να εμφανίζει το μήνυμα «Ελλιπή στοιχεία».*/

#include <stdio.h>
int main(void)
{
    int a, count, sum;
    float mo;
    count = 0;
    sum = 0;
    do
    {
        printf("Arithmos: ");
        scanf("%d", &a);
        if (a >= 0)
        {
            sum += a;
            count++;
        }
    } while (a >= 0);
    if (count)
    {
        mo = (float)sum / count;
        printf("Mesos oros: %10.2f\n", mo);
    }
    else
        printf("Ellipi stoixeia\n");
}

