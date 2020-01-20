/*ΑΣΚΗΣΗ 7
Να γράψετε πρόγραμμα που να διαβάζει 100 ακέραιους αριθμούς
και στο τέλος να εμφανίζει το μεγαλύτερο από αυτούς 
καθώς και το πλήθος των εμφανίσεων αυτού του αριθμού.*/

#include <stdio.h>
int main(void)
{
    int a, max, count, i;
    for (i = 1; i <= 100; i++)
    {
        printf("Arithmos-%d: ", i);
        scanf("%d", &a);
        if (i == 1)
        {
            max = a;
            count = 1;
        }
        else if (a > max)
        {
            max = a;
            count = 1;
        }
        else if (a == max)
            count++;
    }
    printf("Megalyteros: %d\n", max);
    printf("Emfaniseis: %d\n", count);
}
