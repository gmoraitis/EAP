/*ΑΣΚΗΣΗ 4
Να γράψετε πρόγραμμα που να διαβάζει
την ακτίνα ενός κύκλου και να εμφανίζει
την περίμετρο και το εμβαδόν του 
(περίμετρος = 2πρ, εμβαδόν = πρ2 - όπου π=3,1416).*/

#include<stdio.h>

#define pi 3.1416


int main(void)
{
    
    float r;

    printf("Dwse thn aktina : ");
    scanf("%f",&r);

    printf("Perimetros kyklou: %5.2f\n", 2*pi*r); 
    printf("Embadon kyklou: %5.2f\n", pi*r*r);
}