/*ΔΟΜΗ ΕΠΙΛΟΓΗΣ ΑΣΚΗΣΗ 1
Να γράψετε πρόγραμμα που να διαβάζει
τους βαθμούς των τριών τριμήνων ενός 
μαθητή και να εμφανίζει το μέσο όρο τους. 
Επιπλέον, να εμφανίζει τη λέξη «ΠΡΟΑΓΕΤΑΙ» 
αν ο μέσος όρος είναι μεγαλύτερος ή ίσος του 10.*/

#include<stdio.h>
int main(void)
{
    int first,second,third;
    float mo;

    printf("\n");
    printf("Dwse ton vathmo tou prwtou trimhnou : ");
    scanf("%d",&first);

    printf("Dwse ton vathmo tou deyterou trimhnou : ");
    scanf("%d",&second);

    printf("Dwse ton vathmo tou tritou trimhnou : ");
    scanf("%d",&third);

    mo = (float)(first+second+third)/3;

    printf("O mesos oros einai : %4.1f\n",mo);

    if(mo >= 10) printf("Proagesai !!! ");
    printf("\n");

}