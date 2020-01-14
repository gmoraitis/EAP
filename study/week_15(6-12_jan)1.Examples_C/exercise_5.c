/*Δημιουργήστε και εκτελέστε το παρακάτω πρόγραμμα Σαν είσοδο δώστε κατά σειρά:
Papadopoulos Nikolaos
και
Kwstas Petrou
Τι παρατηρείτε; Διορθώστε το πρόγραμμα ώστε να λειτουργεί σωστά.*/

/* File: prog-a14.c */ 
#include <stdio.h>
int main(void)
{
char s1[50]; char s2[50];

printf("plhktrologise san prwto onoma: Papadopoulos Nikolaos\n"); /*scanf ("%s",s1);*/
gets (s1);
printf("to prwto onoma einai: %s\n",s1);
printf("plhktrologise san deytero onoma: Kwstas Petrou\n"); /*scanf ("%s",s2);*/
gets (s2);
printf("to deytero onoma einai: %s\n",s2);

return 0;
}