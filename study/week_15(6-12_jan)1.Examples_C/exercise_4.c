/*Δημιουργήστε ένα πρόγραμμα που θα ζητά από τον χρήστη δύο ακέραιους αριθμούς και θα εκτυπώνει στην οθόνη:
- Το άθροισμά τους
- Την διαφορά τους
- Το γινόμενό τους.*/

#include<stdio.h>

int main(void)
{

    int x;
    int y;

    printf("Dwste enan akeraio x:\n");
    scanf("%d",&x);
    printf("Dwste enan akeraio y:\n");
    scanf("%d",&y);
    printf("x + y = %d\n",x+y);
    printf("x - y = %d\n",x-y);
    printf("x * y = %d\n",x*y);
    return 0;
}
