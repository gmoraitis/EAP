/*ΑΣΚΗΣΗ 5
Να γράψετε πρόγραμμα που να διαβάζει
την αξία (άνευ ΦΠΑ) ενός προϊόντος 
και να εμφανίζει το ΦΠΑ (18%) και τη συνολική αξία του.*/

#include<stdio.h>
int main(void)
{
    float aksia, fpa, synolo;

    printf("Dose tin aksia: ");
    scanf("%f", & aksia);

    fpa = aksia * 0.23;
    synolo = aksia + fpa;

    printf("F.P.A.: %6.2f\n", fpa); 
    printf("Synoliki aksia: %6.2f\n", synolo);
}