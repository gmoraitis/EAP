/*Δημιουργήστε ένα πρόγραμμα που θα εμφανίζει στην οθόνη του υπολογιστή τα παρακάτω κατά σειρά:
Τον ακέραιο αριθμό 5
Τον πραγματικό αριθμό 5
Τον πραγματικό αριθμό 5.01234567890123456789 σε απλή γραφή
Τον πραγματικό αριθμό 5.01234567890123456789 σε απλή γραφή με δύο δεκαδικά ψηφία
Τον πραγματικό αριθμό 5.01234567890123456789 σε επιστημονική γραφή
Τον πραγματικό αριθμό 5.01234567890123456789 αφήνοντας τον υπολογιστή να επιλέξει την εμφάνισή του ανάμεσα σε απλή και επιστημονική γραφή
Τον χαρακτήρα Ν
Την συμβολοσειρά \n\t\a
Την συμβολοσειρά «ΟΝΟΜΑ»
•
Ενδεικτική έξοδος του προγράμματος είναι η παρακάτω:
O akeraios arithmos x exei timh: 5
O pragmatikos arithmos y exei timh: 5.000000
O pragmatikos arithmos z exei timh: 5.012346
O pragmatikos arithmos z exei timh: 5.01
O pragmatikos arithmos z exei timh: 5.0123458e+000 
O pragmatikos arithmos z exei timh: 5.012346
O xaraktiras einai o N
\n\t\a
ONOMA*/

#include<stdio.h>

int main(void)
{
    int x = 5;
    float y = 5;
    float z = 5.01234567890123456789;
    char w = 'N'; 
    printf("o akeraios arithmos exei thn timh %d\n",x);
    printf("o pragmatikos arithmos y exei thn timh %f\n",y);
    printf("o pragmatikos arithmos y exei thn timh %f\n",z);
    printf("O pragmatikos arithmos z exei timh: %.2f\n",z);
    printf("O pragmatikos arithmos z exei timh: %3.7e\n",z);
    printf("O pragmatikos arithmos z exei timh: %3.7g\n",z);
    printf("o xarakthras einai %c\n",w);
    printf("\\n\\t\\a\n");
    printf("όνομα");

    return 0 ;

}

