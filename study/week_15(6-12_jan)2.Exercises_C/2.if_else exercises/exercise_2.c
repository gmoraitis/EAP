/*ΑΣΚΗΣΗ 2
Να γράψετε πρόγραμμα που να διαβάζει
έναν ακέραιο αριθμό και ανάλογα να
εμφανίζει την ένδειξη «Περιττός 
αριθμός» ή «Άρτιος αριθμός».*/

#include<stdio.h>
int main(void)
{
    int x;

    printf("Dwse akeraio arithmo : ");
    scanf("%d",&x);

    if (x % 2)
    
        printf("O arithmos einai artios!\n");
    
    else
    
        printf("O arithmos einai perittos!\n");
    
    
    
}